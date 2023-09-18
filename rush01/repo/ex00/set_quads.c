/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_quads.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 15:10:21 by qhauuy            #+#    #+#             */
/*   Updated: 2023/09/03 15:10:24 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "set_quads.h"

void	ft_set_quads_column(int table[4][4], int *quads[4], int j)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		quads[i] = table[i] + j;
		i++;
	}
}

void	ft_set_quads_row(int table[4][4], int *quads[4], int i)
{
	int	j;

	j = 0;
	while (j < 4)
	{
		quads[j] = table[i] + j;
		j++;
	}
}

void	ft_reverse(int *quads[4])
{
	int	*tmp;

	tmp = quads[0];
	quads[0] = quads[3];
	quads[3] = tmp;
	tmp = quads[1];
	quads[1] = quads[2];
	quads[2] = tmp;
}

void	ft_set_quads(int table[4][4], int *quads[4], int index_view)
{
	if (index_view < 4)
		ft_set_quads_column(table, quads, index_view);
	else if (index_view < 8)
	{
		ft_set_quads_column(table, quads, index_view - 4);
		ft_reverse(quads);
	}
	else if (index_view < 12)
		ft_set_quads_row(table, quads, index_view - 8);
	else
	{
		ft_set_quads_row(table, quads, index_view - 12);
		ft_reverse(quads);
	}
}
