/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 12:42:13 by qhauuy            #+#    #+#             */
/*   Updated: 2023/09/02 02:09:58 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j] && j < nb)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>
int main()
{
	char dest[8] = "s";
	char *src = "l33sdjfr";
	unsigned int nb = 10;
	printf("%s\n", ft_strncat(dest, src, nb));
	char dest2[8] = "s";
	printf("%s\n", strncat(dest2, src, nb));
}
*/
