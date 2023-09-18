/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:49:06 by qhauuy            #+#    #+#             */
/*   Updated: 2023/09/08 13:57:44 by qhauuy           ###   ########.fr       */
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

int	ft_strslen(char **strs, int size)
{
	int	i;
	int	length;

	length = 0;
	i = 0;
	while (i < size)
	{
		if (strs[i])
			length += ft_strlen(strs[i]);
		i++;
	}
	return (length);
}

void	ft_copy_2(char *dest, int *i, char *src)
{
	while (*src)
	{
		dest[*i] = *src;
		(*i)++;
		src++;
	}
}

void	ft_copy_1(char *dest, char **strs, char *sep, int size)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (n < size)
	{
		if (strs[n])
			ft_copy_2(dest, &i, strs[n]);
		if (n < size - 1)
			ft_copy_2(dest, &i, sep);
		n++;
	}
	dest[i] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		total_length;

	if (size <= 0)
		total_length = 0;
	else
		total_length = ft_strslen(strs, size) + (size - 1) * ft_strlen(sep);
	result = malloc(sizeof(char) * (total_length + 1));
	if (result == NULL || size <= 0)
		return (result);
	ft_copy_1(result, strs, sep, size);
	return (result);
}

/*
#include <stdio.h>
int	main()
{
	char *strs[] = {"salut", NULL, "toi", "", "b"};
	int	size = 5;
	char *sep = "+";
	char *result = ft_strjoin(size, strs, sep);
	printf("\'%s\'\n", result);
	free(result);
	return (0);
}
*/
