/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva <csilva@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 13:43:47 by csilva            #+#    #+#             */
/*   Updated: 2025/11/01 13:43:49 by csilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*tmp_dst;
	const unsigned char	*tmp_src;
	size_t				i;

	i = 0;
	tmp_dst = (unsigned char *) dest;
	tmp_src = (const unsigned char *) src;
	while (i < n)
	{
		tmp_dst[i] = tmp_src[i];
		i++;
	}
	return (dest);
}
/* #include <stdio.h>

int	main(void)
{
	char	p[] = "Olamundo";
	char	s[9];

	char	*f = ft_memcpy(s, p, 3);
	char	*d = memcpy(s, p, 3);
	printf("%s\n", f);
	printf("%s\n", d);
} */