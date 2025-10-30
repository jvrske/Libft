/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva <csilva@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 15:48:33 by csilva            #+#    #+#             */
/*   Updated: 2025/10/30 13:38:56 by csilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dsize)
{
	size_t	len_src;
	size_t	i;

	i = 0;
	len_src = ft_strlen(src);
	if (dsize == 0)
		return (len_src);
	while (i < dsize - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len_src);
}

/* #include <stdio.h>

int	main(void)
{
	char	s[] = "abcde";
	char	s1[] = "abcde";
	char	d[20];
	char	e[20];

	printf("%zu\n", ft_strlcpy(d, s, 6));
	printf("%zu\n", strlcpy(e, s1, 6));
	printf("%s\n", d);
	printf("%s\n", e);
} */