/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 10:24:59 by qhauuy            #+#    #+#             */
/*   Updated: 2023/08/31 11:16:11 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
		return (ft_recursive_factorial(nb - 1) * nb);
}

/*
#include <stdio.h>
int	main(void)
{
	int	i;

	i = -5;
	while (i <= 10)
	{
		printf("%d : %d\n", i, ft_recursive_factorial(i));
		i++;
	}
}
*/
