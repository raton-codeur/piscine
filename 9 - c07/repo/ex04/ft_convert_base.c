/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 18:15:56 by qhauuy            #+#    #+#             */
/*   Updated: 2023/09/07 17:29:27 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_check_base(char *base, int size_base)
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

int	ft_position_in_str(char c, char *str)
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
	while (ft_position_in_str(*str, base) != -1)
	{
		result = result * size_base + ft_position_in_str(*str, base);
		str++;
	}
	if (sign)
		return (-result);
	else
		return (result);
}
