/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva <csilva@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 12:14:09 by csilva            #+#    #+#             */
/*   Updated: 2025/11/03 16:21:23 by csilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/* #include <stdio.h>

int	main(void)
{
	t_list	*l1 = ft_lstnew(ft_strdup("abc"));
	t_list	*l2 = ft_lstnew(ft_strdup("cba"));
	t_list	*x = ft_lstnew(ft_strdup("new"));

	l1->next = l2;

	printf("%p\t%p\n", x->next, l1);
	ft_lstadd_front(&l1, x);
	printf("%p\t%p\n", x->next, l1);
} */