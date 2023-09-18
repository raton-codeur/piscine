/* ************************************************************************** */
#include <ft.h>

int	ft_length_line(int file_descriptor, int i)
{
	int		length_read;
	char	c;
	int		j;
	int		length_line;

	length_line = 0;
	j = 0;
	while (1)
	{
		length_read = read(file_descriptor, &c, 1);
		if (length_read == 1)
		{
			if (i == j)
				length_line++;
			if (c == '\n')
				j++;
		}
		else
			return (length_line);
	}
}

int	ft_count_lines(int file_descriptor)
{
	int		length_read;
	char	c;
	int		count;

	count = 1;
	while (1)
	{
		length_read = read(file_descriptor, &c, 1);
		if (length_read == 1)
		{
			if (c == '\n')
				count++;
		}
		else
			return (count);
	}
}

int	ft_size_file(int file_descriptor)
{
	int		length_read;
	char	c;
	int		count;

	count = 0;
	while (1)
	{
		length_read = read(file_descriptor, &c, 1);
		if (length_read == 1)
			count++;
		else
			return (count);
	}
}
