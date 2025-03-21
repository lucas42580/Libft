/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaysant <lpaysant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 15:29:43 by lpaysant          #+#    #+#             */
/*   Updated: 2025/03/21 18:34:32 by lpaysant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

static int	countletter(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] == c)
		i++;
	while (s[i] != c && s[i] != '\0')
	{
		count++;
		i++;
		if (s[i] == c)
			return (count);
	}
	return (count);
}

static char	*putword(char const *s, char c)
{
	char	*strdup;
	int		i;

	i = 0;
	strdup = (char *)malloc((countletter(s, c) + 1) * sizeof(char));
	if (!strdup)
		return (NULL);
	while (s[i] != c && s[i] != '\0')
	{
		strdup[i] = s[i];
		i++;
	}
	strdup[i] = '\0';
	return (strdup);
}

static int	countword(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (c == s[i] && s[i])
		i++;
	while (s[i])
	{
		if (c == s[i] && s[i + 1] != c)
			count++;
		i++;
		if (s[i] == '\0' && s[i - 1] != c)
			count++;
	}
	return (count);
}

static void	freestrs(char **tab)
{
	int	i;

	i = 0;
	while (tab[i] != NULL)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		i1;
	int		j;

	i1 = 0;
	j = 0;
	if (!s)
		return (NULL);
	strs = (char **)ft_calloc((countword(s, c) + 1), sizeof(char *));
	if (!strs)
		return (NULL);
	while (i1 < countword(s, c) && (size_t)j < ft_strlen(s))
	{
		while (s[j] == c)
			j++;
		strs[i1] = putword(s + j, c);
		if (strs[i1] == NULL)
			return (freestrs(strs), NULL);
		while (s[j] != c && s[j] != '\0')
			j++;
		i1++;
	}
	return (strs);
}
