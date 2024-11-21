/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaysant <lpaysant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 10:33:01 by lpaysant          #+#    #+#             */
/*   Updated: 2024/11/20 18:03:41 by lpaysant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <string.h>
//#include <stdio.h>

char	*ft_strdup(const char *src)
{
	char	*tab;
	int		i;

	i = 0;
	while (src[i])
		i++;
	tab = malloc ((i + 1) * sizeof(char));
	if (!tab)
		return (NULL);
	i = 0;
	while (src[i])
	{
		tab[i] = src[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

/*int     main(void)
{
        char    str [] = "";
        printf("%s\n", ft_strdup(str));
        printf("%s\n", strdup(str));
        return(0);
}*/