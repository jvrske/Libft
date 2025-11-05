/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva <csilva@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 20:11:38 by csilva            #+#    #+#             */
/*   Updated: 2025/11/05 16:04:20 by csilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	total_len;
	size_t	i;

	i = 0;
	dst_len = ft_strlen(dst);
	total_len = ft_strlen(src) + dst_len;
	if (dst_len >= size)
		return (ft_strlen(src) + size);
	while ((i + dst_len) < size - 1 && src[i])
	{
		dst[i + dst_len] = src[i];
		i++;
	}
	dst[i + dst_len] = '\0';
	return (total_len);
}

/* #include <stdio.h>

int	main(void)
{
	char	d1[13] = "Hello ";
	char	s1[] = "World";

	char	d[13] = "Hello ";
	char	s[] = "World";

	printf("%zu\n", ft_strlcat(d1, s1, 12));
	printf("%zu\n", strlcat(d, s, 12));
	printf("%s\n", d1);
	printf("%s\n", d);
} */