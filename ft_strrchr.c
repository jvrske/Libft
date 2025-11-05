/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva <csilva@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 11:39:48 by csilva            #+#    #+#             */
/*   Updated: 2025/11/05 16:04:38 by csilva           ###   ########.fr       */
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

/* #include <stdio.h>

int	main(void)
{
	char	*s = "teste 123456";
	int		d = 1637;
	char	*f = "teste 123456";
	int		e = 1637;
	
	printf("%s\n", ft_strrchr(s, d));
	printf("%s\n", strrchr(f, e));
} */