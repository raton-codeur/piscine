/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 20:25:11 by qhauuy            #+#    #+#             */
/*   Updated: 2023/08/28 08:50:43 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_alpha(char c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

int	ft_is_alpha_num(char c)
{
	return (ft_is_alpha(c) || (c >= '0' && c <= '9'));
}

void	ft_to_lower(char *c)
{
	if (*c >= 'A' && *c <= 'Z')
		*c = *c + 32;
}

void	ft_to_upper(char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 32;
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_is_alpha(str[i]))
		{
			if (i != 0 && (ft_is_alpha_num(str[i - 1])))
				ft_to_lower(str + i);
			else
				ft_to_upper(str + i);
		}
		i++;
	}
	return (str);
}

/*
#include <stdio.h>
int	main(void)
{
	char s[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s\n", ft_strcapitalize(s));
}
*/
