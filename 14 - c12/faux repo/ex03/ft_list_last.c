/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:22:05 by qhauuy            #+#    #+#             */
/*   Updated: 2023/09/13 15:36:27 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	if (begin_list == NULL)
		return (NULL);
	while (begin_list->next != NULL)
		begin_list = begin_list->next;
	return (begin_list);
}

/*
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

#include <stdio.h>
int	main(void)
{
	char *s1 = "salut";
	char *s2 = "toi";

	t_list *begin_list = ft_create_elem(s1);
	ft_list_push_front(&begin_list, s2);

	t_list *result = ft_list_last(begin_list);

	printf("result : %s\n", result->data);
}
*/
