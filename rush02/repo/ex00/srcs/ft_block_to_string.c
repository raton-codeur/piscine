/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 14:40:53 by pdeson            #+#    #+#             */
/*   Updated: 2023/09/09 17:05:56 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strcat_space(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
		i++;
	if (i != 0)
	{
		dest[i] = ' ';
		i++;
	}
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char    *ft_char_to_text(char **map, char *text_block, char *key)
{
    char    buff;

    buff = ft_get_map_index(map, key);
    text_block = ft_strcat_space(text_block, ft_get_value(map, buff));
    return (text);
}


char    *ft_block_to_string(char **map, char *text_block, char *block)
{
    char    diz[3];

    if (block[2] != '0')
    {
        text_block = ft_char_to_text(map, text_block, block[2]);
        text_block = ft_char_to_text(map, text_block, '100');
    }
    if (block[1] == '1')
    {
        diz[0] = '1';
        diz[1] = block[0];
        text_block = ft_char_to_text(map, text_block, diz);
    }
    else if (block[1] > '1')
    {
        diz[0] = block[1];
        diz[1] = '0';
        text_block = ft_char_to_text(map, text_block, diz);
    }
    if (block[0] > '1' && block[1] > 1)
    {
        text_block = ft_char_to_text(map, text_block, block[0]);
    }
    return (text_block);
}
/*
int ft_get_map_index(char **map, char *key) --> indice de la cle dans maps
char    *ft_get_value(char **map, int i) --> texte dans le dico associe a i
*/