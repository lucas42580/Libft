/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaysant <lpaysant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 13:38:25 by lpaysant          #+#    #+#             */
/*   Updated: 2024/11/14 16:44:02 by lpaysant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
//#include <stdio.h>

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	*str1;

	i = 0;
	str1 = (char *) str;
	while (str1[i])
	{
		if (c == str1[i])
			return (&str1[i]);
		else
			i++;
	}
	if (c == '\0' && str1[i] == '\0')
		return (&str1[i]);
	return (NULL);
}

/*int	main(void)
{
	char    str [] = "hfehgjdlsfdgl";
	int     c = 'l';

        printf("%s\n", ft_strchr(str, c));
        printf("%s\n", strchr(str, c));
        return(0);
}*/