/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 13:54:03 by qhauuy            #+#    #+#             */
/*   Updated: 2023/09/07 16:17:52 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_char_in_str(char c, char *s)
{
	while (*s)
	{
		if (*(s++) == c)
			return (1);
	}
	return (0);
}

int	ft_length(char *str, char *charset)
{
	int	word_or_delimiter;
	int	i;

	i = 0;
	word_or_delimiter = ft_char_in_str(str[i], charset);
	while (str[i] && ft_char_in_str(str[i], charset) == word_or_delimiter)
		i++;
	return (i);
}

int	ft_count_words(char *str, char *charset)
{
	int	result;

	result = 0;
	if (ft_char_in_str(*str, charset))
		str += ft_length(str, charset);
	while (*str)
	{
		str += ft_length(str, charset);
		result++;
		str += ft_length(str, charset);
	}
	return (result);
}

void	ft_copy(char *dest, char *word, int length)
{
	int	i;

	i = 0;
	while (i++ < length)
		*(dest++) = *(word++);
	*dest = '\0';
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		i;
	int		n;

	result = malloc(sizeof(char *) * (ft_count_words(str, charset) + 1));
	if (result == NULL)
		return (NULL);
	i = 0;
	n = 0;
	while (str[i])
	{
		if (!ft_char_in_str(str[i], charset))
		{
			result[n] = malloc(sizeof(char) * \
				(ft_length(str + i, charset) + 1));
			if (result[n] == NULL)
				return (NULL);
			ft_copy(result[n++], str + i, ft_length(str + i, charset));
		}
		i += ft_length(str + i, charset);
	}
	result[n] = 0;
	return (result);
}

/*
#include <stdio.h>
int	main(void)
{
	char *str = " salut  ,comment ca va ?? bien ? ";
	char *charset = " ,;?";
	char **result = ft_split(str, charset);
	int i = 0;
	if (result != NULL)
	{
		while (result[i] != 0)
			printf("%s\n", result[i++]); 
		i = 0;
		while (result[i] != 0)
			free(result[i++]);
		free(result);
	}
	return (0);
}
*/
