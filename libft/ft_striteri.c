/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaysant <lpaysant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 17:58:35 by lpaysant          #+#    #+#             */
/*   Updated: 2024/11/22 12:17:59 by lpaysant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

/*static void	iter(unsigned int i, char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 32;
	else if (*c >= 'A' && *c <= 'Z')
		*c = *c + 32;
}*/

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

/*int	main(void)
{
	char 	str [] = "LoReM iPsUm";
	ft_striteri(str, iter);
	printf("%s\n", str);
	return(0);
}*/