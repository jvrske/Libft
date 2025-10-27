/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva <csilva@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 20:11:38 by csilva            #+#    #+#             */
/*   Updated: 2025/10/27 11:49:36 by csilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	total_len;

	dst_len = ft_strlen(dst);
	total_len = ft_strlen(src) + dst_len;
	if (dst_len >= size)
		return (ft_strlen(src) + size);
	while (*src != '\0' && dst_len < size - 1)
	{
		dst[dst_len++] = *(src++);
	}
	dst[dst_len] = '\0';
	return (total_len);
}
