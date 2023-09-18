int ft_is_model(char *s, char *model, int n)
{
	int	i;

	i = 0;
	while (s[i] && s[i] == model[i] && i < n)
		i++;
	return (s[i] == '\0');
}

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_length_line(char *s)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != '\n')
		i++;
	if (s[i] == '\n')
		i++;
	return (i);
}

int	ft_size_key(char *s)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != ':')
		i++;
	return (i);
}