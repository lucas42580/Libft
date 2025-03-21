/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printfunction.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaysant <lpaysant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:10:24 by lpaysant          #+#    #+#             */
/*   Updated: 2025/03/21 18:39:02 by lpaysant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

int	ft_nbrbase(unsigned long nbr, const char *base, int fd, ssize_t *count)
{
	unsigned long	base_len;

	base_len = 0;
	while (base[base_len])
		base_len++;
	if (nbr >= base_len)
		ft_nbrbase(nbr / base_len, base, fd, count);
	if (ft_putchar_prtf(base[nbr % base_len], fd) == -1)
		return (-1);
	(*count)++;
	return (0);
}

int	ft_putnbr_prtf(int n, int fd, ssize_t *count)
{
	if (n < 0)
	{
		if (ft_putchar_prtf('-', fd) == -1)
			return (-1);
		n = n * (-1);
		(*count)++;
	}
	if (n == -2147483648)
	{
		(*count) += 10;
		if (write(fd, "2147483648", 10) == -1)
			return (-1);
	}
	if (n > 9)
	{
		ft_putnbr_prtf(n / 10, fd, count);
		ft_putnbr_prtf(n % 10, fd, count);
	}
	if (n >= 0 && n <= 9)
	{
		(*count)++;
		if (ft_putchar_prtf(n + '0', fd) == -1)
			return (-1);
	}
	return (0);
}

int	ft_putstr_prtf(char *str, int fd)
{
	if (write(fd, str, ft_strlen(str)) == -1)
		return (-1);
	return (0);
}

int	ft_putchar_prtf(int c, int fd)
{
	if (write(fd, &c, 1) == -1)
		return (-1);
	return (0);
}
