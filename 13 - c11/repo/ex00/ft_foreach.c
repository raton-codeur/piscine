/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:02:19 by qhauuy            #+#    #+#             */
/*   Updated: 2023/09/14 15:39:03 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
		(*f)(tab[i++]);
}

/*
#include <unistd.h>
void	ft_putnbr(int nbr)
{
	char	c;

	if (nbr == -2147483648)
		write(1, "-2147483648", 11);
	else if (nbr < 10)
	{
		c = nbr + '0';
		write(1, &c, 1);
		write(1, "\n", 1);
	}
	else
	{
		ft_putnbr(nbr / 10);
		c = nbr % 10 + '0';
		write(1, &c, 1);
	}
}

#include <stdio.h>
int main()
{
	int t[] = {5, 6, 7, 2, 3};
	ft_foreach(t, 5, &ft_putnbr);
}
*/
