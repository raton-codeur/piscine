/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 15:10:49 by qhauuy            #+#    #+#             */
/*   Updated: 2023/09/03 17:39:09 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "initial.h"
#include "solve.h"

int	main(int argc, char **argv)
{
	char	*first_input;
	int		input[16];
	int		table[4][4];
	int		stop;

	if (argc == 2)
	{
		first_input = argv[1];
		if (ft_get_input(first_input, input))
		{
			ft_initialize(table);
			stop = 0;
			ft_solve(table, input, &stop);
			if (!stop)
				ft_putstr("Error\n");
		}
		else
			ft_putstr("Error\n");
	}
	else
		ft_putstr("Error\n");
	return (0);
}
