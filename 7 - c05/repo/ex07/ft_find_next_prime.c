/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 01:53:13 by qhauuy            #+#    #+#             */
/*   Updated: 2023/09/02 02:03:08 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	divisor;

	if (nb < 2)
		return (0);
	else if (nb == 2)
		return (1);
	else if (nb % 2 == 0)
		return (0);
	else
	{
		divisor = 3;
		while (divisor <= nb / divisor)
		{
			if (nb % divisor == 0)
				return (0);
			divisor += 2;
		}
		return (1);
	}
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}

/*
#include <stdio.h>
int	main(void)
{
	for (int i = 25425; i < 575777; i++)
		printf("after %d : %d\n", i, ft_find_next_prime(i));
}
*/
