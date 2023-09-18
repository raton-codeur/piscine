/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 14:40:53 by pdeson            #+#    #+#             */
/*   Updated: 2023/09/09 17:18:44 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>

int main(int argc, char **argv)
{
	char	*input;
    char	*dict_name;

	if (ft_check_input(argc, argv))
	{
		input = ft_get_input(argc, argv);
		dict_name = ft_get_dict(argc, argv);
		if (ft_check_dict(dict_name))
		{
		}
	}
	else
		write(1, "Error\n", 6);
}

int main()
{
	char *s_dict = malloc(sizeof(char) * (ft_size_file("f.dict") + 1));
	if (s_dict == NULL)
		return (1);
	ft_file_to_string("f.dict", s_dict);
	char *map[41];
	if (ft_check_dict(s_dict))
	{
		ft_set_map(s_dict, map);
		for (int i = 0; i <= 40; i++)
			printf("%.50s\n-\n", map[i]);
	}
	free(s_dict);
}

