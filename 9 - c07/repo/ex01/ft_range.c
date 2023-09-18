/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 19:09:47 by qhauuy            #+#    #+#             */
/*   Updated: 2023/09/05 12:48:02 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*result;
	int	i;

	if (min >= max)
		return (NULL);
	result = malloc(sizeof(int) * (max - min));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < (max - min))
	{
		result[i] = min + i;
		i++;
	}
	return (result);
}

/*
#include <stdio.h>
int main()
{
	int min = -5;
	int max = 5;
	int *t;
   
	t = ft_range(min, max);
	if (t != NULL)
	{
		for (int i = 0; i < (max - min); i++)
			printf("%d\n", t[i]);
		free(t);
	}
}
*/
