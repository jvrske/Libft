/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva <csilva@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:00:51 by csilva            #+#    #+#             */
/*   Updated: 2025/10/30 15:29:13 by csilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == 0)
		return ((char *)haystack);
	while (haystack[i])
	{
		j = 0;
		while (haystack[i + j] == needle[j] && needle[j]
			&& haystack[i + j] && i + j < len)
			j++;
		if (needle[j] == '\0')
			return ((char *) &haystack[i]);
		i++;
	}
	return (0);
}

/* #include <stdio.h>

int	main(void)
{
	char	*s1 = "lorem ipsum dolor escola";
	char	*s2 = "ipsum";
	
	char	*res = ft_strnstr(s1, s2, 20);
	printf("%s\n", res);
}
 */