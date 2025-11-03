/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva <csilva@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 15:51:30 by csilva            #+#    #+#             */
/*   Updated: 2025/11/03 16:17:44 by csilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*next;

	if (!lst || !del)
		return ;
	tmp = *lst;
	while (tmp)
	{
		next = tmp->next;
		del(tmp->content);
		free(tmp);
		tmp = next;
	}
	*lst = NULL;
}
/* 
#include <stdio.h>

void deletnode(void *d)
{
    free(d);
}

int	main(void)
{
	t_list	*l1 = ft_lstnew(ft_strdup("abc"));
	t_list	*l2 = ft_lstnew(ft_strdup("cba"));
	t_list	*l3 = ft_lstnew(ft_strdup("ccc"));

	l1->next = l2;
	l2->next = l3;
	l3->next = NULL;

	ft_lstclear(&l1, deletnode);
	printf("%s", (char *)l1);
} */