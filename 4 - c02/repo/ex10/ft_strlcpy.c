/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 14:49:48 by qhauuy            #+#    #+#             */
/*   Updated: 2023/08/29 12:21:01 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;

	i = 0;
	while (i < ((int)size - 1) && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	if (size != 0)
		dest[i] = '\0';
	while (src[i])
		i++;
	return (i);
}

/*
#include <stdio.h>
int	main(void)
{
	char	dest[5];
	char	*src = "salut toi!";
	printf("%s\n%d\n", dest, ft_strlcpy(dest, src, 5));
}
*/
