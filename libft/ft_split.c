/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaysant <lpaysant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 15:29:43 by lpaysant          #+#    #+#             */
/*   Updated: 2024/11/19 17:19:31 by lpaysant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	countletter(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	return (i);
}

int	countword(char *s, char c)
{
	int	i;
	int	count;

	i = 1;
	count = 1;
	while (s[i])
	{
		if (c == s[i])
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char *s, char c)
{
	char	**strs;
	int		i1;
	int		i2;
	int		i3;

	i1 = 0;
	i2 = 0;
	i3 = 0;
	strs = (char **) malloc((countword(s, c) + 1) * sizeof (char *));
	while (i1 < countword(s, c))
	{
		strs[i1] = (char *) malloc((countletter(s + i3, c) + 1) * sizeof(char));
		while (s[i3] != c && s[i3] != '\0')
		{
			strs[i1][i2] = s[i3];
			i2++;
			i3++;
		}
		strs[i1][i2] = '\0';
		i1++;
		i2 = 0;
		i3++;
	}
	//free(strs);
	return (strs);
}

/*int	main(void)
{
	int	i = 0;

	char	**strs = ft_split("s d s", ' ');
	/*while((ft_split("sgds dsgsg sgdd", ' '))[i] != NULL)
	{
		printf("%s\n", (ft_split("sgds dsgsg sgdd", ' '))[i]);
		i++;
		if(ft_split("sgds dsgsg sgdd", ' ')[i] == NULL)
			printf("%s", ft_split("sgds dsgsg sgdd", ' ')[i]);
	}*/
	//printf("%s\n", ft_split("", ' ')[0]);
	/*while(strs[i]  != NULL)
	{
		printf("%s\n", strs[i]);
		i++;
	}
	printf("%s", strs[i]);
	free(strs);
	return(0);
}*/
