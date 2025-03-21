/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaysant <lpaysant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 13:38:25 by lpaysant          #+#    #+#             */
/*   Updated: 2025/03/21 18:34:38 by lpaysant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str1;

	i = 0;
	str1 = (char *)s;
	while (str1[i])
	{
		if ((unsigned char)c == str1[i])
			return (&str1[i]);
		i++;
	}
	if ((unsigned char)c == '\0')
		return (&str1[i]);
	return (NULL);
}
