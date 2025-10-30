/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva <csilva@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:37:28 by csilva            #+#    #+#             */
/*   Updated: 2025/10/30 16:07:13 by csilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;
	char	*new_s;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	new_s = ft_calloc((ft_strlen(s1) + ft_strlen(s2) + 1), sizeof(char));
	if (!new_s)
		return (NULL);
	while (s1[i])
	{
		new_s[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		new_s[i + j] = s2[j];
		j++;
	}
	new_s[i + j] = '\0';
	return (new_s);
}

/* #include <stdio.h>
int	main(void)
{
	char	*c = "Hello ";
	char	*d = "World";
	char	*f = ft_strjoin(c, d);
	printf("%s\n", f);
} */