/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgaudin <mgaudin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 17:39:56 by mgaudin           #+#    #+#             */
/*   Updated: 2024/10/09 17:45:06 by mgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_bytes;
	unsigned char	c_byte;
	size_t			i;

	s_bytes = (unsigned char *)s;
	c_byte = (unsigned char)c;
	i = 0;
	while (s_bytes[i] && i < n)
	{
		if (s_bytes[i] == c)
			return ((void *)(s_bytes + i));
	}
	return (NULL);
}
