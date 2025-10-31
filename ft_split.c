/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva <csilva@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 12:22:15 by csilva            #+#    #+#             */
/*   Updated: 2025/10/31 11:38:29 by csilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	size_t	i;
	int		words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			words++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (words);
}

static char	*string_splitter(const char *s, char c)
{
	size_t	i;
	char	*str;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	str = ft_calloc(i + 1, sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

static void	*free_new_s(char **new_s)
{
	int	i;

	i = 0;
	while (new_s[i])
	{
		free (new_s[i]);
		i++;
	}
	free (new_s);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	char	**new_s;
	size_t	i;
	size_t	j;

	new_s = ft_calloc((count_words(s, c) + 1), sizeof(char *));
	if (!new_s)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			new_s[j] = string_splitter(&s[i], c);
			if (!new_s[j])
				return (free_new_s(new_s));
			j++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (new_s);
}

/* #include <stdio.h>
int	main(void)
{
	char    **result;
	int i;

	result = ft_split("Hello World This is a test", ' ');
	i = 0;
	while (result[i])
	{
		printf("%s\n", result[i]);
		i++;
	}
	return (0);
} */