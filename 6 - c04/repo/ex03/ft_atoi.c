/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 11:01:54 by qhauuy            #+#    #+#             */
/*   Updated: 2023/08/31 09:25:51 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_white_and_sign(char *str, int *sign)
{
	while (*str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r' || *str == ' ')
		str++;
	*sign = 0;
	while (1)
	{
		if (*str == '-')
			*sign = 1 - *sign;
		else if (*str != '+')
			return (str);
		str++;
	}
}
/* version longue :
while (*str == '\t' || *str == '\n' || *str == '\v'\
			|| *str == '\f' || *str == '\r' || *str == ' ')
		str++;
*sign = 0;
while (*str)
{
	if (*str == '-')
	{
		*sign = 1 - *sign;
		str++;
	}
	else if (*str == '+')
		str++;
	else
		return (str);
}
return (str);
*/

int	ft_atoi(char *str)
{
	int	result;
	int	sign;

	str = ft_white_and_sign(str, &sign);
	result = 0;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	if (sign)
		return (-result);
	else
		return (result);
}

/*
#include <stdlib.h>
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("%d\n%d\n", atoi(argv[1]), ft_atoi_base(argv[1]));
}
*/
