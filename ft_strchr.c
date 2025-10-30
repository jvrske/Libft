/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva <csilva@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 11:11:46 by csilva            #+#    #+#             */
/*   Updated: 2025/10/30 15:01:19 by csilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (1)
	{
		if ((unsigned char) s[i] == (unsigned char) c)
			return ((char *) &s[i]);
		if (s[i] == '\0')
			break ;
		i++;
	}
	return (NULL);
}

/* #include <stdio.h>

int	main(void)
{
	char	*s = "teste";
	int		d = 1637;
	char	*f = "teste";
	int		e = 1637;
	
	printf("%s\n", ft_strchr(s, d));
	printf("%s\n", strchr(f, e));
} */