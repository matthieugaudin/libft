/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgaudin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 19:17:34 by mgaudin           #+#    #+#             */
/*   Updated: 2024/10/11 21:29:12 by mgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_subtabs(char const *s, char c)
{
	size_t	is_counting;
	size_t	nb_subtabs;
	size_t	i;

	is_counting = 1;
	i = 0;
	nb_subtabs = 0;
	while (s[i])
	{
		if (is_counting == 0 && s[i] == c)
		{
			is_counting = 1;
			nb_subtabs++;
		}
		if (is_counting == 1 && s[i] != c)
			is_counting = 0;
		i++;
	}
	return(nb_subtabs);
}

static unsigned int	ft_fill_tab(size_t nb_subtabs, char	**tab)
{
	size_t i;

	(void)nb_subtabs;
	i = 0;
	while (tab[i])
	{
		printf("%s", **tab[i]);
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	size_t nb_subtabs;
	char	**str;

	nb_subtabs = ft_count_subtabs(s, c);
	str = (char **)malloc((nb_subtabs + 1) * sizeof(char *));
	if (!str)
		return (str);
	ft_fill_tab(nb_subtabs, str);
	return (str);
}

int main(void)
{
	ft_split("  je suis   test  ", ' ');
}