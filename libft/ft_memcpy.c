/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaysant <lpaysant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 13:31:44 by lpaysant          #+#    #+#             */
/*   Updated: 2024/11/14 14:05:07 by lpaysant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
//#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*dest1;
	const char	*src1;

	dest1 = dest;
	src1 = src;
	i = 0;
	while (dest1[i])
		i++;
	if (n > i)
		return (0);
	else
	{
		i = 0;
		while (i < n)
		{
			dest1[i] = src1[i];
			i++;
		}
		return (dest1);
	}
}

/*int     main(void)
{
        char    src [] = "start stop";
        char    dest[100];
        char    src [] = "bobo bbbbbbb cc dddd";
        char    src[7] = "aabbcc";
        
        ft_memcpy(src + 2, src, 4);
        memmove(src + 2, src, 4);
        printf("%s", src);
        return (0);
}*/