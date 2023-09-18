/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 09:33:06 by qhauuy            #+#    #+#             */
/*   Updated: 2023/08/29 11:50:07 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char *s1 = "salut";
	char *s2 = "salut";
	printf("%d\n%d\n", ft_strcmp(s1, s2), strcmp(s1, s2));
}   
*/
