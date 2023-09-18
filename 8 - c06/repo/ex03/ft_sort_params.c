/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 15:40:05 by qhauuy            #+#    #+#             */
/*   Updated: 2023/09/05 12:05:26 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort(char **argv);
void	ft_putstr(char *s);
void	ft_swap(char **a, char **b);
int		ft_cmp(char *s1, char *s2);

int	main(int argc, char **argv)
{
	int	i;

	if (argc > 1)
	{
		ft_sort(argv + 1);
		i = 1;
		while (argv[i])
			ft_putstr(argv[i++]);
	}
	return (0);
}

void	ft_sort(char **array)
{
	int		i;
	int		j;
	int		length;
	char	**min;

	i = 0;
	while (array[i])
		i++;
	length = i;
	i = 0;
	while (i < length - 1)
	{
		min = array + i;
		j = i + 1;
		while (j < length)
		{
			if (ft_cmp(*min, array[j]) > 0)
				min = array + j;
			j++;
		}
		ft_swap(array + i, min);
		i++;
	}
}

void	ft_putstr(char *s)
{
	while (*s)
		write(1, s++, 1);
	write(1, "\n", 1);
}

void	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	ft_cmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
