/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 14:14:49 by qhauuy            #+#    #+#             */
/*   Updated: 2023/09/14 10:59:18 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int argc, char **argv)
{
	int	i;
	int	fd;

	if (argc == 1)
		ft_display_file(0);
	i = 1;
	while (i < argc)
	{
		if (*argv[i] == '-')
			ft_display_file(0);
		else
		{
			fd = open(argv[i], O_RDONLY);
			if (fd == -1 || ft_display_file(fd) == -1)
				ft_display_error(argv[0], argv[i]);
			if (fd != -1)
				close(fd);
		}
		i++;
	}
}
