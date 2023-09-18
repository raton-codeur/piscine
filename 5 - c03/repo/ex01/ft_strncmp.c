/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 20:34:14 by qhauuy            #+#    #+#             */
/*   Updated: 2023/08/29 12:34:11 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s1[i] == s2[i] && i + 1 != n)
		i++;
	return (s1[i] - s2[i]);
}

/*
#include <stdio.h>
#include <string.h>
int main()
{
	char *s = "";
	char *ss = "";
	unsigned int i = 2;
	printf("%d\n%d\n", strncmp(s, ss, i), ft_strncmp(s, ss, i));
}
*/
