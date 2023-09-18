/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:03:15 by qhauuy            #+#    #+#             */
/*   Updated: 2023/09/11 17:59:43 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_display_file(char *file_name)
{
	int		file_descriptor;
	char	buffer[10];
	int		n;

	file_descriptor = open(file_name, O_RDONLY);
	if (file_descriptor == -1)
		return (0);
	n = read(file_descriptor, buffer, 10);
	while (n > 0)
	{
		write(1, buffer, n);
		n = read(file_descriptor, buffer, 10);
	}
	if (n == -1)
		return (0);
	return (1);
}
