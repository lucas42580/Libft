/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaysant <lpaysant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:27:51 by lpaysant          #+#    #+#             */
/*   Updated: 2024/11/14 14:17:48 by lpaysant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
//#include <bsd/string.h>
//#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	n;
	size_t	i;

	i = 0;
	n = 0;
	while (src[n])
		n++;
	if (size > 0)
	{
		while (i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (n);
}

/*int     main(void)
{
        char    dst [] = "";
        char    src [] = "123";

        printf("%zu\n", ft_strlcpy(dst, src, 0));
        //printf("%zu\n", strlcpy(dst, src, 0));
        printf("%s", dst);
        return(0);
}*/