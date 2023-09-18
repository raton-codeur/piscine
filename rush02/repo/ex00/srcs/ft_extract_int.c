/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extract_int.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 14:40:53 by pdeson            #+#    #+#             */
/*   Updated: 2023/08/23 14:41:38 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>

void    ft_extract_int(char *str, char **blocks, int len_blocks)
{
    int len_str;
    int i;

    len_str = ft_strlen(str);
    i = 1;
    while (i <= len_blocks)
    {
        blocks[i - 1][0] = str[len_str - (i * 3) + 2];
        if ((len_str - (i * 3) + 1) < 0)
            blocks[i - 1][1] = '0';
        else
            blocks[i - 1][1] = str[len_str - (i * 3) + 1];
        if ((len_str - (i * 3)) < 0)
            blocks[i - 1][2] = '0';
        else
            blocks[i - 1][2] = str[len_str - (i * 3)];
        i++;
    }
    return ;
}