/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 18:53:34 by qhauuy            #+#    #+#             */
/*   Updated: 2023/09/02 01:51:43 by qhauuy           ###   ########.fr       */
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

/*
#include <stdio.h>
int	main()
{
	for (int i = -5; i != 150; i++)
	{
		if (ft_is_prime(i))
			printf("%d\n", i);
	}
}
*/
