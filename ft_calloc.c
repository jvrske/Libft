/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva <csilva@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:04:47 by csilva            #+#    #+#             */
/*   Updated: 2025/10/31 15:08:02 by csilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tmp;
	size_t			i;

	i = 0;
	if (count > SIZE_MAX / size)
		return (malloc(0));
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

/* #include <stdio.h>

int	main(void)
{
	char	*str = "Hello World";
	char	*s = ft_calloc(strlen(str) + 1, sizeof(char));
	if (!s)
		return (1);
	strcpy (s, "Hello World");
	printf ("%s\n", s);
	free (s);
}
 */