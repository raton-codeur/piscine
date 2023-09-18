/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 18:04:47 by qhauuy            #+#    #+#             */
/*   Updated: 2023/08/26 06:44:13 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_int(int i)
{
	char	d1;
	char	d0;

	d1 = i / 10 + '0';
	d0 = i % 10 + '0';
	write(1, &d1, 1);
	write(1, &d0, 1);
}

void	print(int i, int j)
{
	print_int(i);
	write(1, " ", 1);
	print_int(j);
	if (i != 98)
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			print(i, j);
			j++;
		}
		i++;
	}
}
