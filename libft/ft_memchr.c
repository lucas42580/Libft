/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaysant <lpaysant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:39:01 by lpaysant          #+#    #+#             */
/*   Updated: 2024/11/14 16:52:12 by lpaysant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
//#include <stdio.h>

void	*ft_memchr(const void *buf, int c, size_t count)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)buf;
	while (i < count)
	{
		if (str[i] == c)
			return (&str[i]);
		i++;
	}
	return (NULL);
}

/*int     main(void)
{
        char    str [] = "sdldfldfd";
        int     c = 'l';

        printf("%p\n", ft_memchr(str, c, 10));
        printf("%p\n", memchr(str, c, 10));
        return(0);
}*/