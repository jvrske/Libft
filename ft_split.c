/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva <csilva@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 11:06:16 by csilva            #+#    #+#             */
/*   Updated: 2025/11/04 12:39:17 by csilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_word_len(const char *s, char c)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static size_t	ft_nword(const char *s, char c)
{
	size_t	i;
	size_t	word;

	i = 0;
	word = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			word++;
		i++;
	}
	return (word);
}

static void	*ft_free(char **new)
{
	size_t	i;

	i = 0;
	while (new[i])
	{
		free(new[i]);
		i++;
	}
	free(new);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	char	**new;
	size_t	i;
	size_t	nword;
	size_t	lenword;

	if (!s)
		return (NULL);
	i = 0;
	nword = ft_nword(s, c);
	new = (char **)ft_calloc(nword + 1, sizeof(char *));
	if (!new)
		return (NULL);
	while (i < nword)
	{
		while (*s && *s == c)
			s++;
		lenword = ft_word_len(s, c);
		new[i] = (char *)ft_calloc(lenword + 1, sizeof(char));
		if (!new[i])
			return (ft_free(new));
		ft_memcpy(new[i], s, lenword);
		i++;
		s += lenword;
	}
	return (new);
}
/* #include <stdio.h>

int	main(void)
{
	char    **result;
	int 	i;

	result = ft_split(NULL, ' ');
	if (!result)
	{
		printf("ft_split retornou NULL (entrada NULL)\n");
		return (0);
	}

	i = 0;
	while (result[i])
	{
		printf("%s\n", result[i]);
		i++;
	}
	return (0);
} */