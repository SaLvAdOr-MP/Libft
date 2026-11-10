/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaria-r <smaria-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 09:29:49 by smaria-r          #+#    #+#             */
/*   Updated: 2026/11/09 21:28:42 by smaria-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	nstr(char const *s, char c)
{
	int	i;
	int	nstr;

	i = 0;
	nstr = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			nstr++;
		i++;
	}
	return (nstr);
}

static	int	ccount(char const *s, char c, int i)
{
	int	j;
	int	x;
	/*int nc;*/
	
	j = 0;
	x = 0;
	while (s[j])
	{
		if (s[j] == c && i == 0)
			return (j - x);
		else if (s[j] == c && s[j + 1] == c)
			x++;
		else if (s[j] == c && i > 0)
		{
			i--;
			x++;
		}
		j++;	
	}
	return (j - x);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	
	str = malloc(sizeof(*str) * (nstr(s, c) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < nstr(s, c))
	{
		str[i] = malloc(sizeof(**str) * (ccount(s, c, i) + 1));
	}
	str[i] = NULL;
	return (str);
}
