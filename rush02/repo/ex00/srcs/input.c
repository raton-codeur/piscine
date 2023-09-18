/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 17:04:20 by qhauuy            #+#    #+#             */
/*   Updated: 2023/09/09 17:04:32 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>

char	*ft_get_input(int argc, char **argv)
{
	char *input;

	input = NULL;
	if (argc == 2)
		input = argv[1];
	else if (argc == 3)
		input = argv[2];
	return (input);
}

char	*ft_get_dict_name(int argc, char **argv)
{
	if (argc == 2)
		return ("numbers.dict");
	else
		return (argv[1]);
}

int	ft_check_input(int argc, char **argv)
{
    char	*input;

	input = 0;
	if (argc == 2)
        input = argv[1];
    else if (argc == 3)
        input = argv[2];
	else
		return (0);
	return (ft_str_is_numeric(input));
}