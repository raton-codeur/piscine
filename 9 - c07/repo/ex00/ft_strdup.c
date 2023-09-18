/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 17:39:31 by qhauuy            #+#    #+#             */
/*   Updated: 2023/09/05 12:39:09 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*result;
	int		i;

	result = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		result[i] = src[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

/*
#include <stdio.h>
int main()
{
	char *s = "salut";
	char *ss = ft_strdup(s);
	printf("%s\n%s\n", s, ss);
	free(ss);
}
*/
