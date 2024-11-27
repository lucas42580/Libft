/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaysant <lpaysant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:54:20 by lpaysant          #+#    #+#             */
/*   Updated: 2024/11/27 16:12:16 by lpaysant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*tab;
	int		i;

	i = 0;
	if (nmemb > 65535 / size)
		return (NULL);
	tab = malloc (nmemb * size);
	if (!tab)
		return (NULL);
	while (i < (nmemb * size))
	{
		tab[i] = '\0';
		i++;
	}
	return (tab);
}

/*int     main(void)
{
        char * tab = ft_calloc (4, 20 * sizeof(char));
        char * tab2 = calloc (0, 0);
        printf("%s\n", tab);
        printf("%s\n", tab2);
        return(0);
}*/