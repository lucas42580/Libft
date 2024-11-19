/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaysant <lpaysant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:47:33 by lpaysant          #+#    #+#             */
/*   Updated: 2024/11/19 17:26:03 by lpaysant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	myStrlen(void *str)
{
	int		i;
	char	*str1;

	str1 = (char *)str;
	i = 0;
	while (str1[i])
		i++;
	return (i);
}

char	*strnotovrlap(char *dest1, const char *src1, size_t n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		dest1[i] = src1[i];
		i++;
	}
	return (dest1);
}

char	*strovrlap(char *dest1, const char *src1, size_t n)
{
	while (n >= 0)
	{
		if (n > 0)
		{
			dest1[n] = src1[n];
			n--;
		}
		else
			return (dest1);
	}
	return (dest1);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	size_t		j;
	char		*dest1;
	char		*src1;

	dest1 = (char *)dest;
	src1 = (char *)src;
	i = myStrlen(dest1);
	j = myStrlen(src1);
	if (n > i)
		return (0);
	else
	{
		if (i >= j)
			strnotovrlap(dest1, src1, n);
		else
			strovrlap(dest1, src1, n);
		return (dest1);
	}
}

/*int     main(void)
{
        char    dest [] = "aaa";
        char    src [] = "bobo bbbbbbb cc dddd";
        //ft_memmove(src + 2, src, 5);
        memmove(src + 2, src, 5);
        printf("%s", src);
        return (0);
}*/