/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgaudin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:47:20 by mgaudin           #+#    #+#             */
/*   Updated: 2024/10/14 19:21:39 by mgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;
	
	if (fd < 0)
		return ;
	if (n == -2147483648)
	{
		if (!write(fd, "-2147483648\0", 12))
			return ;
	}
	if (n < 0)
	{
		if (!write(fd, "-", 1))
			return ;
		n = -n;
	}
	if (0 <= n && n <= 9)
	{
		c = n + '0';
		if (!write(fd, &c, 1))
			return ;
	}
	else
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
}
