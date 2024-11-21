/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaysant <lpaysant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:47:33 by lpaysant          #+#    #+#             */
/*   Updated: 2024/11/20 12:53:28 by lpaysant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

static char	*strnotovrlap(char *dest1, char *src1, size_t n)
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

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*dest1;
	char		*src1;

	dest1 = (char *)dest;
	src1 = (char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	else
	{
		if (dest1 < src1)
		{
			while (n >= 0)
			{
				dest1[n] = src1[n];
				n--;
			}
			return (dest1);
		}
		else
			strnotovrlap (dest1, src1, n);
		return (dest1);
	}
}

/*int     main(void)
{
	unsigned long src = 0xdeadbeef;
        int size = sizeof(src);
 
        unsigned long dst1;
        unsigned long dst2;
        memmove(&dst1, &src, size);
        ft_memmove(&dst2, &src, size);
	printf("%lu\n", dst1);
	printf("%lu", dst2);
        return (0);
}*/