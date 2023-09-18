/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 12:59:13 by qhauuy            #+#    #+#             */
/*   Updated: 2023/09/14 15:32:26 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	ft_display_error(char *executable_name, char *file_name)
{
	char	*s;

	s = basename(executable_name);
	write(2, s, ft_strlen(s));
	write(2, ": ", 2);
	s = file_name;
	write(2, s, ft_strlen(s));
	write(2, ": ", 2);
	s = strerror(errno);
	write(2, s, ft_strlen(s));
	write(2, "\n", 1);
}

int	main(int argc, char **argv)
{
	int		i;
	int		fd;
	char	*s;

	if (argc == 1)
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
