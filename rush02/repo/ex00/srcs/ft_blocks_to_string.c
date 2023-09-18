char	*ft_strcat_space(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
		i++;
	if (i != 0)
	{
		dest[i] = ' ';
		i++;
	}
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char *ft_blocks_to_string(char *map, char **blocks, int len_blocks)
{
	char sep[500];
	char text_block[500];
	int i;
	char result[2000];

	ft_init(result);
	i = len_blocks - 1;
	while (i >= 0)
	{
		ft_block_to_string(map, text_block, blocks[i]);
		ft_strcat_space(result, text_block);
		if(i > 0)
		{
			ft_get_value(map[i + 28], ft_strlen_value(map[i + 28]), sep);
			ft_strcat_space(result, sep);
		}
		i--;
	}
}
char *ft_init(char *tab)
{
	int i;

	i = 0;
	while (tab[i] != 2000)
	{
		tab[i] = '\0';
		i++;
	}
	return (tab);
}

char *ft_get_sep(int i)
{}
