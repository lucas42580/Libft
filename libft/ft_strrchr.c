/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaysant <lpaysant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:37:06 by lpaysant          #+#    #+#             */
/*   Updated: 2024/11/20 14:42:35 by lpaysant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
//#include <stdio.h>

char	*ft_strrchr(const char *string, int c)
{
	int		i;
	char	*str1;

	i = 0;
	str1 = (char *)string;
	while (str1[i])
		i++;
	while (i >= 0)
	{
		if (c == str1[i])
			return (&str1[i]);
		else
			i--;
	}
	return (NULL);
}

/*int     main(void)
{
        char    str [] = "fwtdsylsersdrdlfdf";
        int     c = 'l';

        printf("%s\n", ft_strrchr(str, c));
        printf("%s\n", strrchr(str, c));
        return(0);
}*/	