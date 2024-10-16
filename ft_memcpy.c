/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgaudin <mgaudin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 10:14:23 by mgaudin           #+#    #+#             */
/*   Updated: 2024/10/16 15:07:42 by mgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest_byte;
	unsigned char	*src_byte;

	if (!dest)
		return (NULL);
	i = 0;
	dest_byte = (unsigned char *)dest;
	src_byte = (unsigned char *)src;
	while (i < n)
	{
		dest_byte[i] = src_byte[i];
		i++;
	}
	return (dest);
}
