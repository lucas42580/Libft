/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaysant <lpaysant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 15:29:43 by lpaysant          #+#    #+#             */
/*   Updated: 2024/11/25 19:37:16 by lpaysant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int	countletter(char const *s, char c)
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

int	countword(char const *s, char c)
{
	int	i;
	int	count;

	i = 1;
	count = 1;
	while (c == s[i])
		i++;
	while (s[i])
	{
		if (c == s[i] && s[i + 1] != c)
			count++;
		i++;
	}
	return (count);
}
static char	freestrs(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		i1;
	int		i2;
	int		i3;

	i1 = 0;
	i2 = 0;
	i3 = 0;
	strs = (char **) malloc((countword(s, c) + 1) * sizeof (char *));
	if (!strs)
		return (NULL);
	while (i1 < countword(s, c) && (size_t)i3 < ft_strlen(s))
	{
		strs[i1] = (char *) malloc((countletter(s + i3, c) + 1) * sizeof(char));
		if (!strs[i1])
			return (freestrs(strs));
		while (s[i3] == c || s[i3] == '\0')
			i3++;
		while (s[i3] != c && s[i3] != '\0')
			strs[i1][i2++] = s[i3++];
		strs[i1][i2] = '\0';
		i1++;
		i2 = 0;
	}
	return (strs);
}

int	main(void)
{
	int	i = 0;

	// char	**strs = ft_split("salut    bla     blabla", ' ');
	// while(strs[i] != NULL)
	// {
	// 	printf("%s\n", strs[i]);
	// 	i++;
	// 	if(strs[i] == NULL)
	// 		printf("%s", strs[i]);
	// }
	//printf("%s\n", ft_split("", ' ')[0]);
	/*while(strs[i]  != NULL)
	{
		printf("%s\n", strs[i]);
		i++;
	}
	printf("%s", strs[i]);
	free(strs);*/

	char	**strs = ft_split("  tripouille  42  ", ' ');
	while (strs[i] != NULL)
	{
		printf("%s", strs[i]);
		i++;
	}
	// printf("%s", strs[i]);
	return(0);
}
