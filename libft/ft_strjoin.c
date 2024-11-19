/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaysant <lpaysant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 12:52:59 by lpaysant          #+#    #+#             */
/*   Updated: 2024/11/19 17:23:59 by lpaysant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	my_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		is1;
	int		is2;

	i = 0;
	is1 = 0;
	is2 = 0;
	str = malloc(my_strlen(s1) + my_strlen(s2) * (my_strlen(s1) - 1));
	if (s1[i] == '\0' || s2[i] == '\0')
		return (NULL);
	while (i < (my_strlen(s1) + my_strlen(s2) * (my_strlen(s1) - 1)))
	{
		str[i] = s1[is1];
		i++;
		is1++;
		while (s2[is2] && s1[is1] != '\0')
		{
			str[i] = s2[is2];
			i++;
			is2++;
		}
		is2 = 0;
	}
	return (str);
}

/*int	main(void)
{
	printf("%s", ft_strjoin("ABCDEF", ".."));
	return (0);
}*/