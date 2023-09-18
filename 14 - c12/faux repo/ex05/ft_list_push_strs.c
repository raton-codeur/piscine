/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:51:01 by qhauuy            #+#    #+#             */
/*   Updated: 2023/09/13 15:59:07 by qhauuy           ###   ########.fr       */
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

t_list	*ft_list_push_strs(int size, char **strs)
{
	int	i;

	while (i < size)
	{
	}
}

#include <stdio.h>
int	main(void)
{
	char *strs[] = {"salut", NULL, "", "toi"};
	int size = 4;
	t_list *begin_list = ft_list_push_strs(size, strs);

	t_list *elem = begin_list;
	while (elem != NULL)
	{
		printf("%s\n", elem->data);
		elem = elem->next;
	}
}
