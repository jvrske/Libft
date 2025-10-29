/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva <csilva@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 11:39:48 by csilva            #+#    #+#             */
/*   Updated: 2025/10/29 13:59:06 by csilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			*res;

	i = ft_strlen(s);
	res = NULL;
	while (1)
	{
		if ((unsigned char) s[i] == (unsigned char) c)
		{
			res = (char *) &s[i];
			return (res);
		}
		if (i == 0)
			break ;
		i--;
	}
	return (res);
}
