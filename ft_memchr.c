/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva <csilva@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 14:31:26 by csilva            #+#    #+#             */
/*   Updated: 2025/10/27 15:03:13 by csilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*tmp_s;
	unsigned char	tmp_c;
	size_t			i;

	i = 0;
	tmp_s = (unsigned char *) s;
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

	c = ft_memchr("Caio", 'i', 4);
	printf("%s\n", c);
} */