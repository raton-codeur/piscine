/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_key.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 14:40:53 by pdeson            #+#    #+#             */
/*   Updated: 2023/09/09 17:05:56 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>

int    ft_strlen_key(char *str)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (str[i] != ':')
    {
        if (str[i] > 47 && str[i] < 58)
            j ++;
        i++;
    }
    return (j);
}

char *ft_get_good_key(char *srce, char *key)
{
/*  Penser a reserver du malloc dans la fonction d'appel
    key = malloc((ft_strlen_key(srce) + 1) * sizeof(char));
    de verifier si malloc a marche
    puis de liberer avec free(key);*/
    int     i;
    int     j;

    i =0;
    while (srce[i] != ':')
    {
        if (srce[i] == ' ')
            i++;
        else
        {
            j = 0;
            while (srce[i] > 47 && srce[i] < 58)
                key[j++] = srce[i++];
            key[j] = '\0';
        }
    }
    return (key);
}