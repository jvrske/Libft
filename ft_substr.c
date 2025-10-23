/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarske <jarske@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 10:16:17 by csilva            #+#    #+#             */
/*   Updated: 2025/10/23 13:49:46 by jarske           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*new_s;
	size_t	i;

	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (!s)
		return (NULL);
	new_s = malloc(sizeof(len + 1));
	if (!new_s)
		return (NULL);
	while (s[start + i] && 1 < len)
	{
		new_s[i] = s[start + i];
		i++;
	}
	new_s[i] = '\0';
	return (new_s); 
}
