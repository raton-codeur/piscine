char	*ft_white_and_sign(char *str, int *sign)
{
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
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