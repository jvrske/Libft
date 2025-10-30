/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva <csilva@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 13:43:19 by csilva            #+#    #+#             */
/*   Updated: 2025/10/30 12:32:48 by csilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*tmp_dst;
	const unsigned char	*tmp_src;
	size_t				i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	tmp_dst = (unsigned char *) dest;
	tmp_src = (const unsigned char *) src;
	if (tmp_dst > tmp_src)
	{
		while (n-- > 0)
			tmp_dst[n] = tmp_src[n];
	}
	else
	{
		while (i < n)
		{
			tmp_dst[i] = tmp_src[i];
			i++;
		}
	}
	return (dest);
}

/* #include <stdio.h>

int	main(void)
{
	char	s[] = "abcde";
	char	s1[] = "abcde";
	char	*d = ft_memmove(&s[2], s, 3);
	char	*e = memmove(&s1[2], s1, 3);

	printf("%s\n", d);
	printf("%s\n", e);
}
 */