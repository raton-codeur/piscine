/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 10:56:23 by qhauuy            #+#    #+#             */
/*   Updated: 2023/08/26 07:14:39 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* renvoie la longueur de nb */
int	length(unsigned int nb)
{
	int	result;

	result = 0;
	while (nb != 0)
	{
		result++;
		nb = nb / 10;
	}
	if (result == 0)
		result++;
	return (result);
}

/* renvoie le code ascii du digit d'indice i de nb */
char	digit_i(unsigned int nb, int i)
{
	while (i > 0)
	{
		nb = nb / 10;
		i--;
	}
	return (nb % 10 + '0');
}

void	ft_putnbr(int nb)
{
	unsigned int	nb_abs;
	char			digit;
	int				i;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb_abs = -nb;
	}	
	else
		nb_abs = nb;
	i = length(nb_abs) - 1;
	while (i >= 0)
	{	
		digit = digit_i(nb_abs, i);
		write(1, &digit, 1);
		i--;
	}
}
