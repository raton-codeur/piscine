/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:48:26 by qhauuy            #+#    #+#             */
/*   Updated: 2023/09/05 14:48:49 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * (max - min));
	if (*range == NULL)
		return (-1);
	i = 0;
	while (i < (max - min))
	{
		(*range)[i] = min + i;
		i++;
	}
	return (max - min);
}

/*
#include <stdio.h>
int	main(void)
{
	int	*range;

	int min = 5;
	int max = 9;
	int result = ft_ultimate_range(&range, min, max);
	if (range != NULL)
	{
		for (int i = 0; i < (max - min); i++)
			printf("%d\n", range[i]);
		free(range);
	}
	printf("taille : %d\n", result);
}
*/
