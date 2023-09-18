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

int    ft_strlen_value(char *str)
{
   int   i;
   int   j;

   i = 0;
   while (str[i] != ':')
      i++;
   i++;
   while (str[i] == ' ')
      i++;
   j = 0;
   while (str[i] != '\n')
   {
      i++;
      j++;
   }
   while (str[i - 1] == ' ')
   {
      i--;
      j--;
   }
   return (j);
}

char *ft_get_value(char *srce, int len,char *value)
{
/* Penser a reserver du malloc dans la fonction d'appel
   value = malloc((ft_strlen_value(srce) + 1) * sizeof(char));
   de verifier si malloc a marche
   puis de liberer avec free(value);*/
   int     i;
   int     j;
 
   i =0;
   while (srce[i] != ':')
      i++;
   i++;
   while (srce[i] == ' ')
      i++;
   j = 0;
   while (j < len)
      value[j++] = srce[i++];
   value[j] = '\0';
   return (value);
}