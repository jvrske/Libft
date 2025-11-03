/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva <csilva@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 15:05:59 by csilva            #+#    #+#             */
/*   Updated: 2025/11/03 16:24:38 by csilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!lst || !new)
		return ;
	if (*lst == 0)
	{
		*lst = new;
		return ;
	}
	tmp = *lst;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	new->next = (NULL);
}

/* #include <stdio.h>

int	main(void)
{
	t_list	*l1 = ft_lstnew(ft_strdup("abc"));
	t_list	*l2 = ft_lstnew(ft_strdup("cba"));
	t_list	*l3 = ft_lstnew(ft_strdup("ccc"));

	l1->next = l2;

	printf("%p\t%p\n", l2->next, l3);
	ft_lstadd_back(&l1, l3);
	printf("%p\t%p\n", l2->next, l3);
} */