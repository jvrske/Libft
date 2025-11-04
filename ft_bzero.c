/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva <csilva@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 13:43:25 by csilva            #+#    #+#             */
/*   Updated: 2025/11/04 14:35:36 by csilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*tmp_ptr;
	size_t			i;

	i = 0;
	tmp_ptr = (unsigned char *) s;
	while (i < n)
	{
		tmp_ptr[i] = 0;
		i++;
	}
}

/* #include <stdio.h>

int	main(void)
{
	char	c[] = "Hello World";
	int	i;

	i = 0;
	ft_bzero(c, 12);
	while (i < 12)
	{
		printf("%d", c[i]);
		i++;
	}
} */