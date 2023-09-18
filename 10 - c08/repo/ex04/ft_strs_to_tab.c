/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 10:35:19 by qhauuy            #+#    #+#             */
/*   Updated: 2023/09/13 11:38:46 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(char *s)
{
	char	*result;
	int		i;

	result = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		result[i] = s[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

void	ft_stock_str(t_stock_str *dest, int size, char *str, char *copy)
{
	dest->size = size;
	dest->str = str;
	dest->copy = copy;
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	t_stock_str			*result;
	t_stock_str			*result_i;

	result = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i <= ac)
	{
		result_i = (t_stock_str *)malloc(sizeof(t_stock_str));
		if (result_i == NULL)
			return (NULL);
		if (i < ac)
		{
			ft_stock_str(result_i, ft_strlen(av[i]), av[i], ft_strdup(av[i]));
			result[i] = *result_i;
		}
		else
			ft_stock_str(result + i, 0, 0, 0);
		i++;
	}
	return (result);
}
