/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva <csilva@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 14:31:26 by csilva            #+#    #+#             */
/*   Updated: 2025/10/30 15:07:57 by csilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*tmp_s;
	char		tmp_c;
	size_t		i;

	i = 0;
	tmp_s = (const char *) s;
	tmp_c = (char) c;
	while (i < n)
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
	char	*d;

	c = ft_memchr("Caio", 'i', 3);
	d = memchr("Caio", 'i', 3);
	printf("%s\n", c);
	printf("%s\n", d);
} */