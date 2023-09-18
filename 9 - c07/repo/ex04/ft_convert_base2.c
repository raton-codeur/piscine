/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 13:36:48 by qhauuy            #+#    #+#             */
/*   Updated: 2023/09/07 16:49:13 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *s);
int		ft_check_base(char *base, int size_base);
char	*ft_white_and_sign(char *str, int *sign);
int		ft_position_in_str(char c, char *str);
int		ft_atoi_base(char *str, char *base);

int	length_nbr(unsigned int nbr, int size_base)
{
	int	result;

	result = 0;
	while (nbr != 0)
	{
		result++;
		nbr = nbr / size_base;
	}
	if (result == 0)
		result++;
	return (result);
}

char	digit_i(unsigned int nbr, int i, char *base, int size_base)
{
	while (i > 0)
	{
		nbr = nbr / size_base;
		i--;
	}
	return (base[nbr % size_base]);
}

void	ft_putnbr_base(int nbr_10, char *nbr_base, char *base)
{
	unsigned int	nbr_10_abs;
	int				i;

	if (nbr_10 < 0)
	{
		*(nbr_base++) = '-';
		nbr_10_abs = -nbr_10;
	}
	else
		nbr_10_abs = nbr_10;
	i = length_nbr(nbr_10_abs, ft_strlen(base)) - 1;
	while (i >= 0)
		*(nbr_base++) = digit_i(nbr_10_abs, i--, base, ft_strlen(base));
	*nbr_base = '\0';
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nbr_10;
	char	*nbr_base;

	nbr_base = malloc(sizeof(char) * 34);
	if (nbr_base == NULL
		|| !ft_check_base(base_from, ft_strlen(base_from))
		|| !ft_check_base(base_to, ft_strlen(base_to)))
		return (NULL);
	nbr_10 = ft_atoi_base(nbr, base_from);
	ft_putnbr_base(nbr_10, nbr_base, base_to);
	return (nbr_base);
}

/*
#include <stdio.h>
int	main(void)
{
	char	*nbr = "  -48";
	char	*base_from = "0123456789";
	char	*base_to = "01";

	char *nbr_base = ft_convert_base(nbr, base_from, base_to);
	printf("\'%s\'\n", nbr_base);
	free(nbr_base);
}
*/
