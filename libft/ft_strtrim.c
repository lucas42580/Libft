/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaysant <lpaysant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 14:02:09 by lpaysant          #+#    #+#             */
/*   Updated: 2024/11/21 12:43:44 by lpaysant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>

static int	mystrlen(char const *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

static int	is_set(char const c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static int	setleft(char const *s1, char const *set)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while ((is_set(s1[i], set)) == 1)
	{
		count++;
		i++;
	}
	return (count);
}

static int	setright(char const *s1, char const *set)
{
	int	i;
	int	count;

	i = mystrlen(s1) - 1;
	count = 0;
	while ((is_set(s1[i], set)) == 1)
	{
		count++;
		i--;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		len;
	int		j;

	i = setleft(s1, set);
	len = mystrlen(s1) - setright(s1, set) - setleft(s1, set);
	if(len < 0)
		len = 0;
	str = malloc ((len * sizeof(char)) + 1);
	j = 0;
	if (!str)
		return (NULL);
	while (i < (mystrlen(s1) - setright(s1, set)))
	{
		str[j] = s1[i];
		j++;
		i++;
	}
	str[j] = '\0';
	return (str);
}

/*int	main(void)
{
	printf("%s", ft_strtrim("  \t \t \n   \n\n\n\t", " \n\t"));
	//printf("%d", (strcmp(ft_strtrim("  \t \t \n   \n\n\n\t", " \n\t"), "")));
	return(0);
}*/