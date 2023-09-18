/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 10:56:23 by qhauuy            #+#    #+#             */
/*   Updated: 2023/08/31 07:35:11 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_last_digit(unsigned int nb)
{
	nb = nb % 10 + '0';
	write(1, &nb, 1);
}

void	ft_print_abs(unsigned int nb)
{
	if (nb < 10)
		ft_print_last_digit(nb);
	else
	{
		ft_print_abs(nb / 10);
		ft_print_last_digit(nb);
	}
}

void	ft_putnbr(int nb)
{
	unsigned int	nb_abs;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb_abs = -nb;
	}	
	else
		nb_abs = nb;
	ft_print_abs(nb_abs);
}

/*
int	main(void)
{
	ft_putnbr(-2147483648);
}
*/
