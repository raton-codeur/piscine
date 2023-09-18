/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 10:11:22 by qhauuy            #+#    #+#             */
/*   Updated: 2023/08/31 15:59:35 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	if (nb < 0)
		return (0);
	result = 1;
	i = 2;
	while (i <= nb)
	{
		result *= i;
		i++;
	}
	return (result);
}

/*
#include <stdio.h>
int	main(void)
{
	int	i;

	i = -5;
	while (i <= 10)
	{
		printf("%d : %d\n", i, ft_iterative_factorial(i));
		i++;
	}
}
*/
