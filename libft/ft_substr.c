/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaysant <lpaysant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 12:17:03 by lpaysant          #+#    #+#             */
/*   Updated: 2024/11/21 11:36:14 by lpaysant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

static int	my_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;

	i = 0;
	if (start > my_strlen(s))
		len = 0;
	if (len > my_strlen(s + start))
		len = mystrlen(s + start);
	str = (char *) malloc ((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}

/*int	main(void)
{
	//printf("%s\n", ft_substr("ABCDEF", 1, 3));
	//printf("%s\n", ft_substr("ABCDEF", 4, 10));
	//char *str = "i just want this part #############";
        //size_t size = 10;
	//printf("%s\n", ft_substr("***189543***", 4, 6));
	printf("%s\n", ft_substr("01234", 10, 10));
	return(0);
}*/