/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaysant <lpaysant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:02:53 by lpaysant          #+#    #+#             */
/*   Updated: 2024/11/22 12:14:55 by lpaysant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t size)
{
	unsigned char	*s1;
	unsigned char	*s2;
	int				i;

	s1 = (unsigned char *)ptr1;
	s2 = (unsigned char *)ptr2;
	i = 0;
	if (size == 0)
		return (0);
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
       /char    s1 [] = "abcd";
        char    s2 [] = "abcc";

        printf("%d\n", ft_memcmp(s1, s2, 3));
        printf("%d\n", memcmp(s1, s2, 3));
	char s[] = {-128, 0, 127, 0};
	char sCpy[] = {-128, 0, 127, 0};
	char s2[] = {0, 0, 127, 0};
	char s3[] = {0, 0, 42, 0};
	printf("%d\n", (!ft_memcmp(s2, s3, 4)));
	printf("%d", (!memcmp(s2, s3, 4)));
        return(0);
}*/