/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva <csilva@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:04:47 by csilva            #+#    #+#             */
/*   Updated: 2025/10/27 16:45:46 by csilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tmp;
	size_t			i;

	i = 0;
	if (!count || !size)
		return (malloc(0));
	tmp = malloc(count * size);
	if (!tmp)
		return (NULL);
	while (i - count * size)
	{
		tmp[i] = 0;
		i++;
	}
	return (tmp);
}
