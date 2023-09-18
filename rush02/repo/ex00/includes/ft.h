/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 14:40:53 by pdeson            #+#    #+#             */
/*   Updated: 2023/09/09 17:19:32 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>

int 	ft_str_is_numeric(char *s);
int		ft_cpt_blocks(char *str);
int		ft_atoi(char *str);
void    ft_extract_int(char *str, char **blocks, int len_blocks);
int     ft_strlen(char *str);
char	*get_input(int argc, char **argv);
char	*get_dict_name(int argc, char **argv);
int	    ft_check_input(int argc, char **argv);
int	    ft_check_dict(char *dict_name);
int	    ft_length_line(int file_descriptor, int i);
int	    ft_count_lines(int file_descriptor);
int	    ft_size_file(int file_descriptor);
char	*ft_strcat(char *dest, char *src);
char	*ft_strcat_space(char *dest, char *src);
char    *ft_char_to_text(char **map, char *text_block, char *key);
char    *ft_block_to_string(char **map, char *text_block, char *block);
int     ft_strlen_key(char *str);
char    *ft_get_good_key(char *srce, char *key);
int     ft_strlen_value(char *str);
char    *ft_get_value(char *srce, int len,char *value);


#endif

