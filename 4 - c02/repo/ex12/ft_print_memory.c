/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 15:45:15 by qhauuy            #+#    #+#             */
/*   Updated: 2023/08/28 20:14:03 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_xdigit(unsigned int i)
{
	if (i >= 0 && i <= 9)
		i = i + '0';
	else
		i = i - 10 + 'a';
	write(1, &i, 1);
}

void	ft_print_xaddr(unsigned long addr)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		ft_print_xdigit((addr >> (4 * (15 - i))) % 16);
		i++;
	}
	write(1, ": ", 2);
}

void	ft_print_xchar(unsigned char *addr, unsigned int i, unsigned int size)
{
	int	j;

	j = 0;
	while (j < 16)
	{
		if (i + j < size)
		{
			ft_print_xdigit(*(addr + i + j) / 16);
			ft_print_xdigit(*(addr + i + j) % 16);
		}
		else
			write(1, "  ", 2);
		if ((j + 1) % 2 == 0)
			write(1, " ", 1);
		j++;
	}
}

void	ft_print_char(unsigned char *addr, unsigned int i, unsigned int size)
{
	int	j;

	j = 0;
	while (j < 16)
	{
		if (i + j < size)
		{
			if (*(addr + i + j) > 31 && *(addr + i + j) < 127)
				write(1, addr + i + j, 1);
			else
				write(1, ".", 1);
		}
		j++;
	}
	write(1, "\n", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size)
	{
		ft_print_xaddr((unsigned long)addr + i);
		ft_print_xchar((unsigned char *)addr, i, size);
		ft_print_char((unsigned char *)addr, i, size);
		i += 16;
	}
	return (addr);
}

/*
int main()
{
	char *s = "salut,\ncomment ca va aujourd'hui ? moi\t:\tsuper !\tregarde";
	ft_print_memory(s, 25);
}
*/
