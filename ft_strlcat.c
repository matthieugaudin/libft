/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgaudin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:56:27 by mgaudin           #+#    #+#             */
/*   Updated: 2024/10/10 19:17:53 by mgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	res;
	size_t dst_len;

	dst_len = ft_strlen(dst);
	res = dst_len + ft_strlen(src);
	i = 0;
	while (src[i] && i < size)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	if (size > res)
		dst[i] = 0;
	else
		dst[i - 1] = 0;
	return (res);	
}
