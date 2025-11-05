/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva <csilva@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 12:12:45 by csilva            #+#    #+#             */
/*   Updated: 2025/11/05 14:49:39 by csilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/* #include <stdio.h>

char    ft_toupperchar(unsigned int index, char c)
{
        (void)index;
        return ((char)ft_toupper(c));
}
int     main(void)
{
        char *s = "abcdef";
        ft_striteri(s, ft_toupperchar);
        printf("%s\n", s);
} */