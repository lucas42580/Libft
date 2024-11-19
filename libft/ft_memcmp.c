/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaysant <lpaysant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:02:53 by lpaysant          #+#    #+#             */
/*   Updated: 2024/11/14 16:55:09 by lpaysant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
//#include <stdio.h>

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t size)
{
	char	*s1;
	char	*s2;
	int		i;

	s1 = (char *)ptr1;
	s2 = (char *)ptr2;
	i = 0;
	if (s1[i] == '\0')
		return (s1[i] - s2[i]);
	while (i < size)
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
		if (i == size)
			return (s1[i - 1] - s2[i - 1]);
	}
	return (s1[i] - s2[i]);
}

/*int     main(void)
{
        char    s1 [] = "abcd";
        char    s2 [] = "abcc";

        printf("%d\n", ft_memcmp(s1, s2, 3));
        printf("%d\n", memcmp(s1, s2, 3));
        return(0);
}*/