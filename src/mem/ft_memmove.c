/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaysant <lpaysant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:47:33 by lpaysant          #+#    #+#             */
/*   Updated: 2025/03/21 18:33:17 by lpaysant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

static char	*strnotovrlap(unsigned char *d1, const unsigned char *s1, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		d1[i] = s1[i];
		i++;
	}
	return ((char *)d1);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest1;
	const unsigned char	*src1;

	dest1 = (unsigned char *)dest;
	src1 = (const unsigned char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (dest1 <= src1)
	{
		strnotovrlap(dest1, src1, n);
		return ((char *)dest1);
	}
	else
	{
		while (n > 0)
		{
			n--;
			dest1[n] = src1[n];
		}
		return ((char *)dest1);
	}
}
