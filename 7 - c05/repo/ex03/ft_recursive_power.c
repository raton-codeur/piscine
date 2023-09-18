/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 12:58:22 by qhauuy            #+#    #+#             */
/*   Updated: 2023/08/31 13:18:31 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
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
			printf("%d ^ %d = %d\n", i, j, ft_recursive_power(i, j));
			j++;
		}
		i++;
	}
}
*/
