/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgaudin <mgaudin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 17:46:40 by mgaudin           #+#    #+#             */
/*   Updated: 2024/10/09 17:53:18 by mgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_bytes;
	unsigned char	*s2_bytes;

	i = 0;
	s1_bytes = (unsigned char *)s1;
	s2_bytes = (unsigned char *)s2;
	while (i < n && (s1_bytes[i] || s2_bytes[i]))
	{
		if (s1_bytes[i] != s2_bytes[i])
			return (s1_bytes[i] - s2_bytes[i]);
	}
	return (0);
}