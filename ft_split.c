/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaysant <lpaysant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 15:29:43 by lpaysant          #+#    #+#             */
/*   Updated: 2024/11/27 16:23:48 by lpaysant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>
#include "libft.h"

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
	strdup = (char *) malloc((countletter(s, c) + 1) * sizeof(char));
	if (!strdup)
	{
		free(strdup);
		return (NULL);
	}
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
	while (c == s[i])
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
	strs = (char **) malloc((countword(s, c) + 1) * sizeof (char *));
	if (!strs)
		return (NULL);
	while (i1 < countword(s, c) && (size_t)j < ft_strlen(s))
	{
		while (s[j] == c)
			j++;
		strs[i1] = putword(s + j, c);
		if (strs[i1] == NULL)
		{
			freestrs (strs);
			return (NULL);
		}
		while (s[j] != c && s[j] != '\0')
			j++;
		i1++;
	}
	strs[i1] = NULL;
	return (strs);
}

// int	main(void)
// {
// 	int	i = 0;

// 	// char	**strs = ft_split("salut    bla     blabla", ' ');
// 	// while(strs[i] != NULL)
// 	// {
// 	// 	printf("%s\n", strs[i]);
// 	// 	i++;
// 	// 	if(strs[i] == NULL)
// 	// 		printf("%s", strs[i]);
// 	// }
// 	//printf("%s\n", ft_split("", ' ')[0]);
// 	/*while(strs[i]  != NULL)
// 	{
// 		printf("%s\n", strs[i]);
// 		i++;
// 	}
// 	printf("%s", strs[i]);
// 	free(strs);*/

// 	char	**strs = ft_split("hello!", ' ');
// 	while (strs[i] != NULL)
// 	{
// 		printf("%s\n", strs[i]);
// 		i++;
// 	}
// 	// printf("%s", strs[i]);
// 	return(0);
// }
