/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva <csilva@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:42:24 by csilva            #+#    #+#             */
/*   Updated: 2025/11/03 14:37:17 by csilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != 0)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

/* #include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	t_list	*l1 = (t_list *)malloc(sizeof(t_list));
	t_list	*l2 = (t_list *)malloc(sizeof(t_list));
	t_list	*l3 = (t_list *)malloc(sizeof(t_list));
	t_list	*temp;

	int	a = 1;
	int b = 2;
	int c = 3;

	l1->content = &a;
	l2->content = &b;
	l3->content = &c;

	l1->next = l2;
	l2->next = l3;
	l3->next = NULL;

	temp = l1;
	printf("%d", ft_lstsize(l1));
	free (l1);
	free (l2);
	free (l3);
} */
