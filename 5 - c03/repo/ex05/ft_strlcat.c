/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 14:40:53 by qhauuy            #+#    #+#             */
/*   Updated: 2023/09/01 14:32:51 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	length_dest;
	unsigned int	length_src;

	length_dest = 0;
	length_src = 0;
	while (src[length_src])
		length_src++;
	if (size != 0)
	{
		while (dest[length_dest] && length_dest < size)
			length_dest++;
		if (length_dest == size)
			return (size + length_src);
		i = length_dest;
		j = 0;
		while (src[j] && length_dest + j < size - 1)
			dest[i++] = src[j++];
		dest[i] = '\0';
	}
	return (length_dest + length_src);
}

/*
#include <stdio.h>
#include <string.h>
int main()
{
	char *src = "osdlkffjsdlkfj";
	char dest1[5] = "sal";
	char dest2[5] = "sol";

	printf("retour : %u\ndest : %s\n", ft_strlcat(dest1,
	src, sizeof(dest1)), dest1);
	printf("retour : %lu\ndest : %s\n", strlcat(dest2,
	src, sizeof(dest2)), dest2);
}
*/
