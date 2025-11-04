/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva <csilva@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 16:30:19 by csilva            #+#    #+#             */
/*   Updated: 2025/11/04 16:56:27 by csilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlist;
	t_list	*nnode;
	void	*cnt;

	if (!lst || !f)
		return (NULL);
	nlist = NULL;
	while (lst)
	{
		cnt = f(lst->content);
		nnode = ft_lstnew(cnt);
		if (!nnode)
		{
			del(cnt);
			ft_lstclear(&nlist, del);
			return (NULL);
		}
		ft_lstadd_back(&nlist, nnode);
		lst = lst->next;
	}
	return (nlist);
}

/* #include <stdio.h>

void	*to_uppercase(void *content)
{
	char	*str;
	char	*new;
	int		i;

	str = (char *)content;
	new = malloc(ft_strlen(str) + 1);
	if (!new)
		return (NULL);
	i = 0;
	while (str[i])
	{
		new[i] = toupper(str[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}

void	del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*lst = NULL;
	t_list	*new_lst;
	t_list	*tmp;

	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("hello")));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("world")));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("libft")));

	new_lst = ft_lstmap(lst, to_uppercase, del);

	printf("Lista original:\n");
	tmp = lst;
	while (tmp)
	{
		printf("%s\n", (char *)tmp->content);
		tmp = tmp->next;
	}

	printf("\nNova lista (maiúsculas):\n");
	tmp = new_lst;
	while (tmp)
	{
		printf("%s\n", (char *)tmp->content);
		tmp = tmp->next;
	}

	ft_lstclear(&lst, del);
	ft_lstclear(&new_lst, del);

	return (0);
} */
