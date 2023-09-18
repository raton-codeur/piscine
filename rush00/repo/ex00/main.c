/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkieffer <nkieffer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 10:59:52 by nlederge          #+#    #+#             */
/*   Updated: 2023/08/26 12:37:36 by nkieffer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);

int	ft_char_to_int(char c)
{
	return (c - '0');
}

int	ft_is_char_numeric(char c)
{
	return ('0' <= c && c <= '9');
}

int	ft_atoi_pos(const char *str)
{
	int		nb;
	int		i;

	nb = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_is_char_numeric(str[i]))
		{
			nb = nb * 10 + ft_char_to_int(str[i]);
			i++;
		}
		else
			return (0);
	}
	return (nb);
}

int	main(int argc, const char *argv[])
{
	if (argc == 3 && ft_atoi_pos(argv[1]) != 0 && ft_atoi_pos(argv[2]) != 0)
		rush(ft_atoi_pos(argv[1]), ft_atoi_pos(argv[2]));
	return (0);
}
