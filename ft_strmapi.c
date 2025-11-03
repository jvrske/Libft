/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva <csilva@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 11:25:13 by csilva            #+#    #+#             */
/*   Updated: 2025/11/03 14:21:23 by csilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*new_s;

	i = 0;
	new_s = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!new_s)
		return (NULL);
	while (s[i])
	{
		new_s[i] = f(i, s[i]);
		i++;
	}
	return (new_s);
}

/* #include <stdio.h>
char	ft_toupperchar(unsigned int index, char c)
{
	(void) index;
	return ((char) ft_toupper(c));
}

int	main(void)
{
	char const	*s = "libft";
	char	*new_s;

	new_s = ft_strmapi(s, ft_toupperchar);
	printf("%s\n", new_s);
	return (0);
} */