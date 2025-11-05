/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva <csilva@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 10:16:17 by csilva            #+#    #+#             */
/*   Updated: 2025/11/05 12:12:15 by csilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	size_t	result;
	char	*new_s;

	if (!s)
		return (NULL);
	i = 0;
	s_len = ft_strlen(s);
	if (start >= s_len)
		result = 0;
	else if (len > (s_len - start))
		result = (s_len - start);
	else
		result = len;
	new_s = malloc(sizeof(char) * (result + 1));
	if (!new_s)
		return (NULL);
	while (i < result)
	{
		new_s[i] = s[start + i];
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}

/* #include <stdio.h>
int	main(void)
{
	char	*s = "Hello World";
	int	i = 6;
	int	j = 5;

	printf("%s\n", ft_substr(s, i, j));
	return (0);
} */