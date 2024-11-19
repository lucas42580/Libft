/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaysant <lpaysant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:46:27 by lpaysant          #+#    #+#             */
/*   Updated: 2024/11/19 17:19:39 by lpaysant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*intlimit(char *tab, int n, int len)
{
	n = 214748364;
	tab[len] = '8';
	tab[0] = '-';
	len--;
	while (n % 10 != 0)
	{
		tab[len] = (n % 10) + '0';
		n = n / 10;
		len--;
	}
	return (tab);
}

int	isneg(int n)
{
	if (n >= 0)
		return (0);
	return (1);
}

int	nbrlen(int n)
{
	int	len;

	len = 0;
	while (n % 10 != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*tab;
	int		len;

	len = nbrlen(n) + isneg(n);
	tab = (char *) malloc ((len + 1) * sizeof(char));
	tab[len] = '\0';
	len--;
	if(n == 0)
		tab[0] = 48;
	if(n == -2147483648)
		return(intlimit(tab, n, len));
	if (isneg(n) == 1)
	{
		tab[0] = '-';
		n = n * (-1);
	}
	while (n % 10 != 0)
	{
		tab[len] = (n % 10) + '0';
		n = n / 10;
		len--;
	}
	return (tab);
}

/*int	main(void)
{
	printf("%s\n", ft_itoa(0));
	return (0);
}*/