/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:42:47 by qhauuy            #+#    #+#             */
/*   Updated: 2023/09/14 19:54:42 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	ft_calculate(int (*fts[5])(int, int), int a, char *op, int b)
{
	if (ft_same_strings(op, "+"))
		return (fts[0](a, b));
	if (ft_same_strings(op, "-"))
		return (fts[1](a, b));
	if (ft_same_strings(op, "*"))
		return (fts[2](a, b));
	if (ft_same_strings(op, "/"))
		return (fts[3](a, b));
	if (ft_same_strings(op, "%"))
		return (fts[4](a, b));
	return (0);
}

void	ft_init(int (*fts[5])(int, int))
{
	fts[0] = &ft_add;
	fts[1] = &ft_subtract;
	fts[2] = &ft_multiply;
	fts[3] = &ft_divide;
	fts[4] = &ft_modulo;
}

int	main(int argc, char *argv[])
{
	int	(*fts[5])(int, int);
	int	result;
	int	a;
	int	b;

	if (argc == 4)
	{
		ft_init(fts);
		a = ft_atoi(argv[1]);
		b = ft_atoi(argv[3]);
		if (ft_same_strings(argv[2], "/") && b == 0)
			write(1, "Stop : division by zero", 23);
		else if (ft_same_strings(argv[2], "%") && b == 0)
			write(1, "Stop : modulo by zero", 21);
		else
		{
			result = ft_calculate(fts, a, argv[2], b);
			ft_putnbr(result);
		}
		write(1, "\n", 1);
	}
	return (0);
}
