/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 13:25:32 by qhauuy            #+#    #+#             */
/*   Updated: 2023/09/02 01:46:24 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt_recursive(int nb, int i, int j)
{
	int	middle;

	middle = (i + j) / 2;
	if (middle * middle == nb)
		return (middle);
	if (i >= j)
		return (0);
	if (middle * middle > nb)
		return (ft_sqrt_recursive(nb, i, middle - 1));
	else
		return (ft_sqrt_recursive(nb, middle + 1, j));
}

int	ft_sqrt(int nb)
{
	return (ft_sqrt_recursive(nb, 0, 46340));
}

/*
#include <stdlib.h>
#include <stdio.h>
int	main(int argc, const char *argv[])
{
	if (argc == 2)
		printf("%d\n", ft_sqrt(atoi(argv[1])));
	else
	{
		for (int i = -5; i < 400; i++)
		{
			if (ft_sqrt(i) != 0)
				printf("sqrt of %d : %d\n", i, ft_sqrt(i));
		}
	}
}
*/
