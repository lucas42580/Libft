/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaysant <lpaysant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:31:39 by lpaysant          #+#    #+#             */
/*   Updated: 2024/11/14 14:21:15 by lpaysant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
//#include <stdio.h>
//#include <bsd/string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	int		i;
	int		j;
	int		n;
	size_t	len;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
		j++;
	if (j + size <= i + j)
		len = j + size;
	else
		len = i + j;
	j = 0;
	n = size - (i + 1);
	while (j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (len);
}

/*int     main(void)
{
        char    dst [] = "123";
        char    src [] = "456789";

        printf("%zu\n", strlcat(dst, src, 0));
        //printf("%zu\n", ft_strlcat(dst, src, 0));
        printf("%s", dst);
        return(0);
}*/