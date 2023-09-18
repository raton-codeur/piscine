/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 08:53:18 by qhauuy            #+#    #+#             */
/*   Updated: 2023/08/31 09:53:53 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_check(char *base, int size_base)
{
	int	i;

	if (size_base < 2)
		return (0);
	while (*base)
	{
		if (*base == '+' || *base == '-' || *base == '\t' || *base == '\n'
			|| *base == '\v' || *base == '\f' || *base == '\r' || *base == ' ')
			return (0);
		i = 1;
		while (base[i])
		{
			if (*base == base[i])
				return (0);
			i++;
		}
		base++;
	}
	return (1);
}

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

int	ft_position(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int				result;
	int				sign;
	unsigned int	size_base;

	size_base = ft_strlen(base);
	str = ft_white_and_sign(str, &sign);
	result = 0;
	if (ft_check(base, size_base))
	{
		while (ft_position(*str, base) != -1)
		{
			result = result * size_base + ft_position(*str, base);
			str++;
		}
	}
	if (sign)
		return (-result);
	else
		return (result);
}

/*
#include <stdio.h>
int	main(void)
{
	char	*str = "  --+-a0a0asa ";
	char	*base = "0a23456789";
	printf("%d\n", ft_atoi_base(str, base));
}
*/
