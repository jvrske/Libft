/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva <csilva@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 12:22:33 by csilva            #+#    #+#             */
/*   Updated: 2025/11/04 15:33:43 by csilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_len(int c)
{
	int		len;
	long	n;

	len = 0;
	n = c;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*new_s;
	long	c;
	int		len;

	c = n;
	len = int_len(c);
	new_s = ft_calloc((len + 1), sizeof(char));
	if (!new_s)
		return (NULL);
	if (c < 0)
	{
		new_s[0] = '-';
		c = -c;
	}
	if (c == 0)
		new_s[0] = '0';
	while (c > 0)
	{
		len--;
		new_s[len] = (c % 10) + '0';
		c /= 10;
	}
	return (new_s);
}

/* #include <stdio.h>

int	main(void)
{
	int i = 12345;

	printf("%s\n", ft_itoa(i));
	return (0);
} */
