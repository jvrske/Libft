/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva <csilva@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 14:31:26 by csilva            #+#    #+#             */
/*   Updated: 2025/10/28 14:16:59 by csilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*tmp_s;
	char	tmp_c;
	size_t			i;

	i = 0;
	tmp_s = (const char *) s;
	tmp_c = (char) c;
	while (tmp_s[i] && i < n)
	{
		if (tmp_s[i] == tmp_c)
			return ((void *) &tmp_s[i]);
		i++;
	}
	return (NULL);
}

/* #include <stdio.h>
int	main(void)
{
	char	*c;

	c = ft_memchr("Caio", 'i', 4);
	printf("%s\n", c);
} */