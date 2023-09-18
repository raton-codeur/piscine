/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:15:56 by qhauuy            #+#    #+#             */
/*   Updated: 2023/09/14 15:48:00 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 0;
	if (length <= 1)
		return (1);
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}

/*
int	ft_cmp(int a, int b)
{
	return (a - b);
}

#include <stdio.h>
#include <stdlib.h>
int	main()
{
	int t[] = {2, 5, 5, 6};
	int size = 4;
	printf("result : %d\n", ft_is_sort(t, size, &ft_cmp));
}
*/
