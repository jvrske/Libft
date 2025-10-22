/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva <csilva@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 13:43:52 by csilva            #+#    #+#             */
/*   Updated: 2025/10/21 16:45:17 by csilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*tmp_ptr;

	if (!b)
		return (b);
	tmp_ptr = (unsigned char *) b;
	while (len > 0)
	{
		*tmp_ptr = c;
		tmp_ptr++;
		len--;
	}
	return (b);
}
