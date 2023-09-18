/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 15:41:36 by qhauuy            #+#    #+#             */
/*   Updated: 2023/08/31 08:52:44 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_check(char *base)
{
	int	i;

	if (ft_strlen(base) < 2)
		return (0);
	while (*base)
	{
		if (*base == '+' || *base == '-')
			return (0);
		i = 1;
		while (base[i])
		{
			if (*base == base[i])
				return (0);
			i++;
		}
		base++;
	}
	return (1);
}

void	ft_print_abs(unsigned int nbr, char *base, unsigned int size_base)
{
	if (nbr < size_base)
		write(1, base + nbr % size_base, 1);
	else
	{
		ft_print_abs(nbr / size_base, base, size_base);
		write(1, base + nbr % size_base, 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	nbr_abs;

	if (ft_check(base))
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			nbr_abs = -nbr;
		}
		else
			nbr_abs = nbr;
		ft_print_abs(nbr_abs, base, ft_strlen(base));
	}
}

/*
int	main(void)
{
	ft_putnbr_base(2, "01");
}
*/
