/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:00:09 by qhauuy            #+#    #+#             */
/*   Updated: 2023/09/14 15:32:26 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include <libgen.h>
# include <string.h>
# include <errno.h>

int		ft_strlen(char *s);
void	ft_display_error(char *executable_name, char *file_name);

#endif
