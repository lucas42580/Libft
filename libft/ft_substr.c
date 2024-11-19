/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaysant <lpaysant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 12:17:03 by lpaysant          #+#    #+#             */
/*   Updated: 2024/11/15 12:42:55 by lpaysant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
//#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;

	i = 0;
	if (len == 0)
		return (NULL);
	str = (char *) malloc (len * sizeof(char));
	while (i < len && s[start] != '\0')
	{
		str[i] = s[start];
		i++;
		start++;
	}
	return (str);
}

/*int	main(void)
{
	printf("%s\n", ft_substr("ABCDEF", 1, 3));
	printf("%s\n", ft_substr("ABCDEF", 4, 10));
}*/