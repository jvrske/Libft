/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva <csilva@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 14:31:26 by csilva            #+#    #+#             */
/*   Updated: 2025/11/05 15:19:56 by csilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char		*tmp_s;
	unsigned char			tmp_c;
	size_t					i;

	i = 0;
	tmp_s = (const unsigned char *) s;
	tmp_c = (unsigned char) c;
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