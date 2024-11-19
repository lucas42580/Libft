/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaysant <lpaysant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:56:23 by lpaysant          #+#    #+#             */
/*   Updated: 2024/11/14 16:47:42 by lpaysant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
//#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	if (s1[i] == '\0')
		return (s1[i] - s2[i]);
	while (i < n && s1[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
		if (i == n)
			return (s1[i - 1] - s2[i - 1]);
	}
	return (s1[i] - s2[i]);
}

/*int     main(void)
{
        char    s1 [] = "abcd";
        char    s2 [] = "abcc";

        printf("%d\n", ft_strncmp(s1, s2, 25));
        printf("%d\n", strncmp(s1, s2, 25));
        return(0);
}*/