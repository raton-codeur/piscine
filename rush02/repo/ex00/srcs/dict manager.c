int	ft_size_file(char *file_name)
{
	int		file_descriptor;
	char	c;
	int		i;

	file_descriptor = open(file_name, O_RDONLY);
	if (file_descriptor == -1)
		return (0);
	i = 0;
	while (read(file_descriptor, &c, 1) == 1)
		i++;
	close(file_descriptor);
	return (i);
}

void	ft_file_to_string(char *file_name, char *dest)
{
	int		file_descriptor;
	int		i;
	char	c;

	file_descriptor = open(file_name, O_RDONLY);
	if (file_descriptor == -1)
		return ;
	i = 0;
	while (read(file_descriptor, &c, 1) == 1)
		dest[i++] = c;
	dest[i] = '\0';
	close(file_descriptor);
}

int	ft_check_dict(char *s)
{
	int	key;

	key = 1;
	while (*s)
	{
		if (key && *s == ':')
			key = 0;
		if (!key)
		{
			if (*s == '\n')
				key = 1;
			else if (*s < 32 || *s >= 127)
				return (0);
		}
		s++;
	}
	return (1);
}