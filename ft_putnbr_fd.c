/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva <csilva@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 14:52:45 by csilva            #+#    #+#             */
/*   Updated: 2025/11/05 14:51:32 by csilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	num;
	char	c;

	if (fd < 0)
		return ;
	num = n;
	if (num < 0)
	{
		write(fd, "-", 1);
		num = -num;
	}
	if (num >= 10)
		ft_putnbr_fd(num / 10, fd);
	num = (num % 10);
	c = num + '0';
	write (fd, &c, 1);
}

/* int	main(void)
{
	int	i = -12345;

	ft_putnbr_fd(i, 1);
} */
