/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 10:38:39 by qhauuy            #+#    #+#             */
/*   Updated: 2023/08/31 12:56:30 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	if (power < 0)
		return (0);
	result = 1;
	i = 0;
	while (i < power)
	{
		result *= nb;
		i++;
	}
	return (result);
}

/*
#include <stdio.h>
int	main(void)
{
	int	i;
	int	j;

	i = -2;
	while (i <= 10)
	{
		j = -2;
		while (j <= 10)
		{
			printf("%d ^ %d = %d\n", i, j, ft_iterative_power(i, j));
			j++;
		}
		i++;
	}
}
*/
