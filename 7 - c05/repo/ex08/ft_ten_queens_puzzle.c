/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 17:43:36 by qhauuy            #+#    #+#             */
/*   Updated: 2023/09/04 14:17:14 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int board[10])
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = board[i] + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_possible(int board[10], int column, int position)
{
	int	i;

	i = 0;
	while (i < column)
	{
		if (board[i] == position)
			return (0);
		if (board[i] == position + (column - i)
			|| board[i] == position - (column - i))
			return (0);
		i++;
	}
	return (1);
}

void	ft_solve(int board[10], int *count)
{
	int	column;
	int	position;

	column = 0;
	while (column < 10)
	{
		if (board[column] == -1)
		{
			position = 0;
			while (position < 10)
			{
				if (ft_possible(board, column, position))
				{
					board[column] = position;
					ft_solve(board, count);
					board[column] = -1;
				}
				position++;
			}
			return ;
		}
		column++;
	}
	print(board);
	(*count)++;
}

int	ft_ten_queens_puzzle(void)
{
	int	board[10];
	int	count;
	int	i;

	i = 0;
	while (i < 10)
		board[i++] = -1;
	count = 0;
	ft_solve(board, &count);
	return (count);
}

/*
#include <stdio.h>
int main()
{
	printf("%d\n", ft_ten_queens_puzzle());
}
*/
