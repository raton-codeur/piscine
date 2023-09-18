/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:47:31 by qhauuy            #+#    #+#             */
/*   Updated: 2023/09/14 20:05:44 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	ft_length(char **tab)
{
	int	i;
	int	result;

	result = 0;
	i = 0;
	while (tab[i])
	{
		result++;
		i++;
	}
	return (result);
}

void	ft_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		j;
	int		length;
	char	**min_index;

	length = ft_length(tab);
	if (length >= 2)
	{
		i = 0;
		while (i < length - 1)
		{
			min_index = tab + i;
			j = i + 1;
			while (j < length)
			{
				if ((*cmp)(tab[j], *min_index) < 0)
					min_index = tab + j;
				j++;
			}
			ft_swap(tab + i, min_index);
			i++;
		}
	}
}

/*
int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

#include <stdio.h>
int	main(void)
{
	char	*s[] = {"salut", " toi", "et", " 78", "53", "lune", "", "pie", 0};
	ft_sort_string_tab(s, ft_strcmp);
	int	i = 0;
	while (s[i])
	{
		printf("<%s>\n", s[i]);
		i++;
	}
	printf("<%s>\n", s[i]);
}
*/
