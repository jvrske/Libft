/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva <csilva@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:54:00 by csilva            #+#    #+#             */
/*   Updated: 2025/11/05 15:12:15 by csilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/* #include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	t_list	*l1 = malloc(sizeof(*l1));
	t_list	*l2 = malloc(sizeof(*l2));
	t_list	*l3 = malloc(sizeof(*l3));
	t_list	*last = NULL;

	int	a = 1;
	int b = 2;
	int c = 3;

	l1->content = &a;
	l2->content = &b;
	l3->content = &c;

	l1->next = l2;
	l2->next = l3;
	l3->next = NULL;

	last = ft_lstlast(l1);
	printf("%s\n", (char *)last->next);
	printf("%d", *(int *)last->content);
} */