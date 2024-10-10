/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgaudin <mgaudin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 12:00:30 by mgaudin           #+#    #+#             */
/*   Updated: 2024/10/10 12:04:44 by mgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*ps;

	ps = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (ps)
	{
		i = 0;
		while (s[i])
		{
			ps[i] = s[i];
			i++;
		}
	}
	return (ps);
}
