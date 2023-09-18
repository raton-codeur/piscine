/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   for_solve.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 15:10:28 by qhauuy            #+#    #+#             */
/*   Updated: 2023/09/03 17:12:52 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "for_solve.h"
#include "set_quads.h"

int	ft_is_unique(int *quads[4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 3)
	{
		j = i + 1;
		while (j < 4)
		{
			if (*quads[i] != 0 && *quads[i] == *quads[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_is_complete(int *quads[4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (*quads[i] == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_check_views(int *quads[4], int view1, int view2)
{
	if (ft_get_view(quads) != view1)
		return (0);
	ft_reverse(quads);
	if (ft_get_view(quads) != view2)
		return (0);
	return (1);
}

int	ft_get_view(int *quads[4])
{
	int	view;
	int	view_max;
	int	i;

	view = 0;
	view_max = 0;
	i = 0;
	while (i < 4)
	{
		if (*quads[i] > view_max)
		{
			view++;
			view_max = *quads[i];
		}
		i++;
	}
	return (view);
}
