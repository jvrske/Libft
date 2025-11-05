/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva <csilva@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 15:38:25 by csilva            #+#    #+#             */
/*   Updated: 2025/11/05 14:23:51 by csilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/* #include <stdio.h>

void deletnode(void *d)
{
    free(d);
}

int	main(void)
{
	t_list	*l1 = ft_lstnew(strdup("abc"));
	t_list	*l2 = ft_lstnew(strdup("cba"));

	l1->next = l2;

	ft_lstdelone(l2, deletnode);
	l1->next = NULL;
	printf("%d", ft_lstsize(l1));
}
 */