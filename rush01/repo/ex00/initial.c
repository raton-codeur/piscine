/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initial.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 15:11:19 by qhauuy            #+#    #+#             */
/*   Updated: 2023/09/03 16:14:11 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "initial.h"

void	ft_putstr(char *s)
{
	while (*s)
		write(1, s++, 1);
}

int	ft_get_input(char *first_input, int input[16])
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (first_input[i])
	{
		if (i % 2 == 0)
		{
			if (first_input[i] >= '1' && first_input[i] <= '4')
				input[j++] = first_input[i] - '0';
			else
				return (0);
		}
		else if (first_input[i] != ' ')
			return (0);
		i++;
	}
	if (i != 31)
		return (0);
	else
		return (1);
}

void	ft_initialize(int table[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			table[i][j] = 0;
			j++;
		}
		i++;
	}
}

void	ft_display(int table[4][4])
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			c = table[i][j] + '0';
			write(1, &c, 1);
			if (j != 3)
				write(1, " ", 1);
			else
				write(1, "\n", 1);
			j++;
		}
		i++;
	}
}
