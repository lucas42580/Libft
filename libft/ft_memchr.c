/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaysant <lpaysant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:39:01 by lpaysant          #+#    #+#             */
/*   Updated: 2024/11/20 16:14:01 by lpaysant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *buf, int c, size_t count)
{
	int		i;
	char	*str;
	char	ch;

	i = 0;
	ch = (char)c;
	str = (char *)buf;
	while (i < count)
	{
		if (str[i] == ch)
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
	char s[] = {0, 1, 2 ,3 ,4 ,5};

	printf("%p\n", ft_memchr(s, 2 + 256, 3));
	printf("%p\n", memchr(s, 2 + 256, 3));
        return(0);
}*/