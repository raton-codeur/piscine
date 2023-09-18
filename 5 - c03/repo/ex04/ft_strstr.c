/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 12:56:18 by qhauuy            #+#    #+#             */
/*   Updated: 2023/09/02 02:11:01 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_match(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i])
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	if (!*to_find)
		return (str);
	while (str[i])
	{
		if (ft_match(str + i, to_find))
			return (str + i);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>
int main()
{
	char *str = "bonjour et bien le bonjour";
	char *to_find = "";
	printf("%s\n%s\n", strstr(str, to_find), ft_strstr(str, to_find));
}
*/
