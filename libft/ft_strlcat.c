/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaysant <lpaysant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:31:39 by lpaysant          #+#    #+#             */
/*   Updated: 2024/11/20 15:56:07 by lpaysant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
#include <stdio.h>
#include <bsd/string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	int		i;
	int		j;
	int		n;
	size_t	len;

	i = 0;
	j = 0;
	while (dest[i] >= 0 && dest[i] <= 127)
		i++;
	while (src[j])
		j++;
	if (j + size <= i + j)
		len = j + size;
	else
		len = i + j;
	j = 0;
	n = size - (i + 1);
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (len);
}

int     main(void)
{
        /*char    dst [] = "123";
        char    src [] = "456789";

        printf("%zu\n", strlcat(dst, src, 0));
        printf("%zu\n", ft_strlcat(dst, src, 0));
        printf("%s", dst);
        return(0);*/
	char dest[30]; memset(dest, 'C', 5);
	char * src = (char *)"AAAAAAAAA";
	

	printf("%zu\n", ft_strlcat(dest, src, -1));
	//printf("%zu\n", strlcat(dest, src, -1));
	printf("%d", strcmp(dest, "CCCCCAAAAAAAAA"));
	return(0);
}