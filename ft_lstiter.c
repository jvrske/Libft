/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva <csilva@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 16:14:46 by csilva            #+#    #+#             */
/*   Updated: 2025/11/03 14:37:09 by csilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;

	tmp = lst;
	if (!lst || !f)
		return ;
	while (tmp)
	{
		f(tmp->content);
		tmp = tmp->next;
	}
}

/* #include <stdio.h>
#include <stdlib.h>

void	ft_toupperchar(void *c)
{
	size_t	i;
	char	*s = (char *) c;
	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		s[i] = (char)ft_toupper((unsigned char) s[i]);
		i++;
	}
}

int	main(void)
{
	t_list	*l1 = malloc(sizeof(*l1));
	if (!l1)
		return (1);

	char	*s = malloc(5);
	if (!s)
	{
		free(l1);
		return (1);
	}
	ft_memcpy(s, "abcd", 5);
	l1->content = s;
	l1->next = NULL;

	ft_lstiter(l1, ft_toupperchar);
	printf("%s\n", (char *)l1->content);

	free(l1->content);
	free(l1);
	return 0;
} */
