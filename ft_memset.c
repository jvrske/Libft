/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva <csilva@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 13:43:52 by csilva            #+#    #+#             */
/*   Updated: 2025/10/30 11:49:26 by csilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*tmp_ptr;
	size_t			i;

	i = 0;
	tmp_ptr = (unsigned char *) s;
	while (i < n)
	{
		tmp_ptr[i] = (unsigned char) c;
		i++;
	}
	return (s);
}

/* #include <stdio.h>

int	main(void)
{
	char	c[6];

	ft_memset(c, 'b', 5);
	printf("%s\n", c);
} */