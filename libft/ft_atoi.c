/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaysant <lpaysant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:48:03 by lpaysant          #+#    #+#             */
/*   Updated: 2024/11/21 13:50:43 by lpaysant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

static int	mywritenbr(const char	*str, int nb, int i)
{
	while (str[i] >= 48 && str[i] <= 57)
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (nb);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	nb;
	int	sign;

	i = 0;
	nb = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32 || str[i] == 43
		|| str[i] == 45 || (str[i] >= 48 && str[i] <= 57))
	{
		if ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
			i++;
		if (str[i] == 43 || str[i] == 45)
		{
			if (str[i] == 45 && sign > 0)
				sign = sign * -1;
			i++;
			if (!(str[i] >= 48 && str[i] <= 57))
				return (0);
		}
		if (str[i] >= 48 && str[i] <= 57)
			return (mywritenbr(str, nb, i) * sign);
	}
	return (0);
}

/*int	main(void)
{
        char *n = " -06050-   ";
        printf("%d\n", atoi(n));
        printf("%d\n", ft_atoi(n));
        return(0);
}*/