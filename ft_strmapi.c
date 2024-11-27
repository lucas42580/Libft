/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaysant <lpaysant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:50:17 by lpaysant          #+#    #+#             */
/*   Updated: 2024/11/27 16:28:39 by lpaysant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

static char	alpha(unsigned int i, char c)
{
	if (c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;	
	unsigned int	i;
	int				len;

	len = 0;
	i = 0;
	while (s[len])
		len++;
	str = malloc((len * sizeof(char)) + 1);
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*int	main(void)
{
	printf("%s\n", ft_strmapi("bonjour comment ca va?", alpha));
	return(0);
}*/