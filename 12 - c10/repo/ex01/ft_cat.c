/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:03:15 by qhauuy            #+#    #+#             */
/*   Updated: 2023/09/14 10:56:50 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

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

int	ft_display_file(int fd)
{
	char	buffer[10];
	int		n;

	n = read(fd, buffer, 10);
	while (n > 0)
	{
		write(1, buffer, n);
		n = read(fd, buffer, 10);
	}
	return (n);
}
