/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaysant <lpaysant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 10:33:01 by lpaysant          #+#    #+#             */
/*   Updated: 2024/11/14 12:25:22 by lpaysant         ###   ########.fr       */
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
	tab = malloc (i * sizeof(char));
	i = 0;
	while (src[i])
	{
		tab[i] = src[i];
		i++;
	}
	return (tab);
}

/*int     main(void)
{
        char    str [] = "";
        printf("%s\n", ft_strdup(str));
        printf("%s\n", strdup(str));
        return(0);
}*/