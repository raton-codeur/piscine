/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:38:26 by qhauuy            #+#    #+#             */
/*   Updated: 2023/09/13 13:24:54 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*result;

	result = malloc(sizeof(t_list));
	if (result)
	{
		result->data = data;
		result->next = NULL;
	}
	return (result);
}

/*
#include <stdio.h>
int	main(void)
{
	char *s1 = "salut";
	char *s2 = "toi";

	t_list *e1 = ft_create_elem(s1);
	t_list *e2 = ft_create_elem(s2);

	e1->next = e2;

	while (e1 != NULL)
	{
		printf("%s\n", e1->data);
		e1 = e1->next;
	}
}
*/
