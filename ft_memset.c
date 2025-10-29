/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva <csilva@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 13:43:52 by csilva            #+#    #+#             */
/*   Updated: 2025/10/29 17:04:30 by csilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*tmp_ptr;

	tmp_ptr = (char *) b;
	while (len > 0)
	{
		*tmp_ptr = c;
		tmp_ptr++;
		len--;
	}
	return (b);
}

int	main(void)
{
	
}