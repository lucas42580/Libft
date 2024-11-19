/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaysant <lpaysant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 11:31:03 by lpaysant          #+#    #+#             */
/*   Updated: 2024/11/19 12:17:51 by lpaysant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		ft_putchar('-', fd);
		n = n * (-1);
	}
	if (n == -2147483648)
		write(fd, "2147483648", 10);
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	if (n >= 0 && n <= 9)
	{
		ft_putchar (n + '0', fd);
	}
}

/*int	main(void)
{
	ft_putnbr_fd(-42, 1);
	return(0);
}*/