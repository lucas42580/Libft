/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaysant <lpaysant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:37:06 by lpaysant          #+#    #+#             */
/*   Updated: 2025/03/21 18:36:19 by lpaysant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str1;

	i = 0;
	str1 = (char *)s;
	i = ft_strlen(s);
	while (i > 0 && (unsigned char)c != str1[i])
		i--;
	if ((unsigned char)c == str1[i])
		return (&str1[i]);
	return (0);
}
