/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva <csilva@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 10:16:17 by csilva            #+#    #+#             */
/*   Updated: 2025/10/22 10:47:15 by csilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*new_s;
	size_t	i;
	size_t	slen;

	i = 0;
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (!s)
		return (NULL);
	new_s = malloc(sizeof(len + 1));
	if (!new_s)
		return (NULL);
	slen = ft_strlen(s);
}
