/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgaudin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:37:28 by mgaudin           #+#    #+#             */
/*   Updated: 2024/10/14 19:29:31 by mgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*src_byte;
	unsigned char	*dest_byte;

	src_byte = (unsigned char *)src;
	dest_byte = (unsigned char *)dest;
	while (n > 0)
	{
		dest_byte[n - 1] = src_byte[n - 1];
		n--;
	}
	return (dest);
}
