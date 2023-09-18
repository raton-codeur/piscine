/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 17:59:27 by qhauuy            #+#    #+#             */
/*   Updated: 2023/08/27 21:04:52 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_uppercase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_char_is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_char_is_alpha(char c)
{
	return (ft_char_is_lowercase(c) || ft_char_is_uppercase(c));
}

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(ft_char_is_alpha(str[i++])))
			return (0);
	}
	return (1);
}

/*
#include <stdio.h>
int main()
{
	if (ft_str_is_alpha("sa0Lut"))
		printf("oui\n");
	else
		printf("non\n");
}
*/
