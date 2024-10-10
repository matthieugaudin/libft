/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgaudin <mgaudin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 17:11:55 by mgaudin           #+#    #+#             */
/*   Updated: 2024/10/10 12:19:10 by mgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	s_len;
	size_t	i;

	s_len = ft_strlen(s) - 1;
	i = 0;
	while (s[s_len])
	{
		if (s[s_len] == c)
			return ((char *)&s[s_len]);
		s_len--;
		i++;
	}
	return (NULL);
}
