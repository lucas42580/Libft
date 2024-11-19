/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaysant <lpaysant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 17:58:35 by lpaysant          #+#    #+#             */
/*   Updated: 2024/11/19 17:20:42 by lpaysant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	putalpha(unsigned int i, char *c)
{
	if (c[i] >= 97 && c[i] <= 122)
		c[i] = c[i] - 32;
}	

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while(s[i])
	{
		(*f)(i, s);
		i++;
	}
}

/*int	main(void)
{
	char 	str [] = "bonjour comment ca va?";
	ft_striteri(str, putalpha);
	printf("%s\n", str);
	return(0);
}*/