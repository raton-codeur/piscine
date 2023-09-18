/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 15:10:03 by qhauuy            #+#    #+#             */
/*   Updated: 2023/09/03 16:31:48 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solve.h"
#include "for_solve.h"
#include "initial.h"
#include "set_quads.h"

void	ft_solve(int table[4][4], int input[16], int *stop)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (table[i][j] == 0)
			{
				ft_test_values(table, input, stop, (int []){i, j});
				return ;
			}
			j++;
		}
		i++;
	}
	if (!*stop)
	{
		ft_display(table);
		*stop = 1;
	}
}

void	ft_test_values(int table[4][4], int input[16], int *stop, int ij[2])
{
	int	value;

	value = 1;
	while (value <= 4)
	{
		table[ij[0]][ij[1]] = value;
		if (ft_possible(table, input))
			ft_solve(table, input, stop);
		table[ij[0]][ij[1]] = 0;
		value++;
	}
}

int	ft_possible(int table[4][4], int input[16])
{
	int	index_view;
	int	*quads[4];

	index_view = 0;
	while (index_view < 12)
	{
		ft_set_quads(table, quads, index_view);
		if (!ft_possible_quads(quads, \
					input[index_view], input[index_view + 4]))
			return (0);
		if (index_view == 3)
			index_view = 8;
		else
			index_view++;
	}
	return (1);
}

int	ft_possible_quads(int *quads[4], int view1, int view2)
{
	if (!ft_is_unique(quads))
		return (0);
	if (ft_is_complete(quads) && !ft_check_views(quads, view1, view2))
		return (0);
	return (1);
}
