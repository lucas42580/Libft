/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaysant <lpaysant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:54:20 by lpaysant          #+#    #+#             */
/*   Updated: 2024/11/20 18:03:22 by lpaysant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

void	*ft_calloc(size_t elementcount, size_t elementsize)
{
	char	*tab;
	int		i;

	i = 0;
	tab = malloc (elementcount * elementsize);
	if (!tab)
		return (NULL);
	while (i < (elementcount * elementsize))
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