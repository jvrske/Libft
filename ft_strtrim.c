/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva <csilva@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:08:12 by csilva            #+#    #+#             */
/*   Updated: 2025/11/03 12:18:13 by csilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	left_right(const char *s1, const char *set)
{
	size_t	i;
	int		index2;
	int		match;

	i = 0;
	while (s1[i])
	{
		index2 = 0;
		match = 0;
		while (set[index2])
		{
			if (s1[i] == set[index2])
			{
				match = 1;
				break ;
			}
			index2++;
		}
		if (match == 0)
			return (i);
		i++;
	}
	return (0);
}

static int	right_left(const char *s1, const char *set)
{
	size_t	i;
	int		index2;
	int		match;

	i = ft_strlen(s1) - 1;
	while (i > 0)
	{
		index2 = 0;
		match = 0;
		while (set[index2])
		{
			if (s1[i] == set[index2])
			{
				match = 1;
				break ;
			}
			index2++;
		}
		if (match == 0)
			return (i + 1);
		i--;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;
	int		index1;
	int		index2;
	char	*new_s;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	index1 = left_right(s1, set);
	index2 = right_left(s1, set);
	new_s = ft_calloc((index2 - index1) + 1, sizeof(char));
	if (!new_s)
		return (NULL);
	while (index1 < index2)
	{
		new_s[i] = s1[index1];
		i++;
		index1++;
	}
	return (new_s);
}

/* #include <stdio.h>
int	main(void)
{
	char	*a = "lorem \n ipsum \t dolor \n sit \t amet";
	char	*b = " ";
	printf("%s\n", ft_strtrim(a, b));
	return (0);
}  */