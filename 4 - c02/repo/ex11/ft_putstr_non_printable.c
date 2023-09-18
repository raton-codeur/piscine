/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 10:29:52 by qhauuy            #+#    #+#             */
/*   Updated: 2023/08/29 11:35:10 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_hex(unsigned char c, char *t)
{
	write(1, "\\", 1);
	write(1, t + (c / 16), 1);
	write(1, t + (c % 16), 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	*convert_hex;

	convert_hex = "0123456789abcdef";
	i = 0;
	while (str[i])
	{
		if (str[i] >= ' ' && str[i] < 127)
			write(1, str + i, 1);
		else
			ft_print_hex(str[i], convert_hex);
		i++;
	}
}

/*
#include <stdio.h>
int main()
{
	char *s = "bonjour\nj'ai été à la plage hier";
	ft_putstr_non_printable(s);
}
*/
