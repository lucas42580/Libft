/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaysant <lpaysant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:19:27 by lpaysant          #+#    #+#             */
/*   Updated: 2025/03/21 18:36:12 by lpaysant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

static int	islittle(char *big, char *little, size_t i, size_t len)
{
	size_t	j;

	j = 0;
	while (big[i] == little[j] && i < len)
	{
		i++;
		j++;
		if (little[j] == '\0')
			return (0);
	}
	return (1);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*b;
	char	*l;

	i = 0;
	j = 0;
	b = (char *)big;
	l = (char *)little;
	if (l[j] == '\0')
		return (&b[i]);
	while (i < len && b[i] != '\0')
	{
		if (islittle(b, l, i, len) == 0)
			return (&b[i]);
		else
			i++;
	}
	return (NULL);
}
