/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 18:04:47 by qhauuy            #+#    #+#             */
/*   Updated: 2023/08/26 06:06:27 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char *t)
{
	int	i;

	i = 0;
	while (t[i] != '\0')
	{
		write(1, t + i, 1);
		i++;
	}
	if (t[0] != 10 - i + '0')
		write(1, ", ", 2);
}

void	spread(char *t, char c)
{
	int	i;

	i = 0;
	while (t[i] != '\0')
	{
		t[i] = c + i;
		i++;
	}
}

void	initial(char *t, int n)
{
	int	i;

	i = 0;
	while (i < n)
		t[i++] = '0';
	t[i] = '\0';
	spread(t, '0');
}

void	update(char *t)
{
	int	i;
	int	size;

	i = 0;
	while (t[i] != '\0')
		i++;
	size = i;
	i--;
	while (t[i] == 10 - (size - i) + '0')
		i--;
	spread(t + i, t[i] + 1);
}

void	ft_print_combn(int n)
{
	char	t[10];

	initial(t, n);
	while (t[0] != 10 - n + '0')
	{
		print(t);
		update(t);
	}
	print(t);
}
