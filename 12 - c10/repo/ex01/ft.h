/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 14:29:19 by qhauuy            #+#    #+#             */
/*   Updated: 2023/09/14 10:48:35 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include <libgen.h>
# include <string.h>
# include <errno.h>

int		ft_strlen(char *s);
int		ft_display_file(int fd);
void	ft_display_error(char *executable_name, char *file_name);

#endif
