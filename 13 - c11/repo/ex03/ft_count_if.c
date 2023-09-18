/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:01:23 by qhauuy            #+#    #+#             */
/*   Updated: 2023/09/14 15:46:10 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (i < length)
	{
		if ((*f)(tab[i]) != 0)
			count++;
		i++;
	}
	return (count);
}

/*
int	ft_str_is_hello(char *s)
{
	if (s[0] != 'h')
		return (0);
	if (s[1] != 'e')
		return (0);
	if (s[2] != 'l')
		return (0);
	if (s[3] != 'l')
		return (0);
	if (s[4] != 'o')
		return (0);
	if (s[5] != '\0')
		return (0);
	return (1);
}

#include <stdio.h>
int main(int argc, char **argv)
{
	if (argc > 1)
	{
		printf("result : %d\n", \
				ft_count_if(argv + 1, argc - 1, &ft_str_is_hello));
	}
}
*/
