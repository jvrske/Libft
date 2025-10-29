/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva <csilva@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 13:43:47 by csilva            #+#    #+#             */
/*   Updated: 2025/10/29 12:32:14 by csilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*tmp_dst;
	const char	*tmp_src;

	if (!src && !dst)
		return (dst);
	tmp_dst = (char *) dst;
	tmp_src = (const char *) src;
	while (n > 0)
	{
		*(tmp_dst++) = *(tmp_src++);
		n--;
	}
	return (dst);
}

/* int	main(void)
{
	char	*p = "Olamundo";
	char s[15];

	ft_memcpy(s, p, sizeof(p));
	printf("%s\n,", s);
} */