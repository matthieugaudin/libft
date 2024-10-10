/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgaudin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:32:22 by mgaudin           #+#    #+#             */
/*   Updated: 2024/10/10 14:49:00 by mgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t  i;
	char    *ps;

	ps = (char *)malloc((len + 1) * sizeof(char));
	i = 0;
	while (i < len)
	{
		ps[i] = s[start + i];
		i++;
	}
	return (ps);
}