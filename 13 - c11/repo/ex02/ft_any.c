/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:20:31 by qhauuy            #+#    #+#             */
/*   Updated: 2023/09/14 15:43:02 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char*))
{
	while (*tab)
	{
		if ((*f)(*tab) != 0)
			return (1);
		tab++;
	}
	return (0);
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
int	main(int argc, char **argv)
{
	if (argc > 1)
		printf("result : %d\n", ft_any(argv + 1, &ft_str_is_hello));
}
*/
