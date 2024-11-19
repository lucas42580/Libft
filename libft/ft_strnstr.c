/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaysant <lpaysant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:19:27 by lpaysant          #+#    #+#             */
/*   Updated: 2024/11/19 17:17:29 by lpaysant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
//#include <bsd/string.h>
//#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		j;
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
		while (b[i] == l[j])
		{
			i++;
			j++;
			if (l[j] == '\0')
				return (&b[i - j]);
			if (b[i] != l[j])
				j = 0;
		}
		if (b[i] != l[j])
		{
			i++;
			j = 0;
		}
	}
	return (NULL);
}

/*int     main(void)
{
        char big [] = "ndddddddndnggg";
        char little [] = "dng";

        printf("%s\n", ft_strnstr(big, little, 15));
        printf("%s\n", strnstr(big, little, 15));
        return(0);
}*/