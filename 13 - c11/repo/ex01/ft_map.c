/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:02:19 by qhauuy            #+#    #+#             */
/*   Updated: 2023/09/14 15:40:14 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*result;

	result = malloc(sizeof(int) * length);
	i = 0;
	while (i < length)
	{
		result[i] = (*f)(tab[i]);
		i++;
	}
	return (result);
}

/*
int	ft_double(int nbr)
{
	return (2 * nbr);
}

#include <stdio.h>
int main()
{
	int t[] = {5, 6, 7, 2, 3};
	int *result = ft_map(t, 5, &ft_double);
	for (int i = 0; i < 5; i++)
		printf("%d\n", result[i]);
}
*/
