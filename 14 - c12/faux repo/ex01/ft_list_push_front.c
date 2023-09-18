/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:48:24 by qhauuy            #+#    #+#             */
/*   Updated: 2023/09/13 14:19:36 by qhauuy           ###   ########.fr       */
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

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*elem;

	elem = ft_create_elem(data);
	if (elem)
	{
		elem->next = *begin_list;
		*begin_list = elem;
	}
}

/*
#include <stdio.h>
int	main(void)
{
	char *s1 = "salut";
	char *s2 = "toi";

	t_list *begin_list = ft_create_elem(s1);
	ft_list_push_front(&begin_list, s2);

	t_list *elem = begin_list;

	while (elem != NULL)
	{
		printf("%s\n", elem->data);
		elem = elem->next;
	}
}
*/
