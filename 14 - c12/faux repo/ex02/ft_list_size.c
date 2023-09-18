/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:12:35 by qhauuy            #+#    #+#             */
/*   Updated: 2023/09/13 14:18:33 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int	result;

	result = 0;
	while (begin_list != NULL)
	{
		result++;
		begin_list = begin_list->next;
	}
	return (result);
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

	printf("size : %d\n", ft_list_size(begin_list));
}
*/
