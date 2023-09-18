char	*ft_get_key(char *s)
{
	char	*key;
	int		i;
	int		j;

	key = malloc(sizeof(char) * (ft_size_key(s) + 1));
	if (key == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] == ' ' || (s[i] >= '\t' && s[i] <= '\r'))
		i++;
	if (s[i] == '+')
		i++;
	if (s[i] == '-')
		key[j++] = s[i++];
	while (s[i] >= '0' && s[i] <= '9')
		key[j++] = s[i++];
	if (j == 0)
		key[j++] = '0';
	key[j] = '\0';
	return (key);
}


int	ft_is_good_key(int i, char *key)
{
	char *model;

	if (ft_strlen(key) <= 3 && i <= 28)
	{
		if (ft_atoi(key) <= 20)
			return (ft_atoi(key) == i);
		else if (ft_atoi(key) <= 100)
			return (ft_atoi(key) == (30 + (10 * (i - 21)))); 
		return (0);
	}
	else if (ft_strlen(key) > 3 && i >= 29)
	{
		model = "1000000000000000000000000000000000000";
		return (ft_is_model(key, model, 4 + 3 * (i - 29)));
	}
	return (0);
}

void	ft_set_map(char *s_dict, char **map)
{
	int		i;
	int		j;
	char	*key;

	i = 0;
	while (i <= 40)
	{
		j = 0;
		while (s_dict[j])
		{
			key = ft_get_key(s_dict + j);
			if (ft_is_good_key(i, key))
				map[i] = s_dict + j;
			free(key);
			j += ft_length_line(s_dict + j);
		}
		i++;
	}
}