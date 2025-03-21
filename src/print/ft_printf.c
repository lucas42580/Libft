/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaysant <lpaysant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 17:19:30 by lpaysant          #+#    #+#             */
/*   Updated: 2025/03/21 18:38:44 by lpaysant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

ssize_t	printint(const char **format, ssize_t *count, va_list ap)
{
	if (**format == 'd' || **format == 'i')
	{
		if (ft_putnbr_prtf(va_arg(ap, int), 1, count) == -1)
			return (-1);
	}
	if (**format == 'u')
	{
		if (ft_nbrbase(va_arg(ap, unsigned int), "0123456789", 1, count) == -1)
			return (-1);
	}
	if (**format == 'X')
	{
		if (ft_nbrbase(va_arg(ap, unsigned int), "0123456789ABCDEF", 1,
				count) == -1)
			return (-1);
	}
	if (**format == 'x')
	{
		if (ft_nbrbase(va_arg(ap, unsigned int), "0123456789abcdef", 1,
				count) == -1)
			return (-1);
	}
	(*format)++;
	return (0);
}

ssize_t	printchar(const char **format, ssize_t *count, va_list ap)
{
	char	*res;

	if (**format == 'c')
	{
		if (ft_putchar_prtf(va_arg(ap, int), 1) == -1)
			return (-1);
		(*format)++;
		(*count)++;
	}
	else if (**format == 's')
	{
		res = va_arg(ap, char *);
		if (res == NULL)
			res = "(null)";
		if (ft_putstr_prtf(res, 1) == -1)
			return (-1);
		(*format)++;
		(*count) += ft_strlen(res);
	}
	return (0);
}

ssize_t	printptr(char *res, const char **format, ssize_t *count)
{
	if (res == NULL)
	{
		(*format)++;
		if (ft_putstr_prtf("(nil)", 1) == -1)
			return (-1);
		(*count) += 5;
		return (0);
	}
	if (ft_putstr_prtf("0x", 1) == -1)
		return (-1);
	(*count) += 2;
	if (ft_nbrbase((unsigned long)res, "0123456789abcdef", 1, count) == -1)
		return (-1);
	(*format)++;
	return (0);
}

ssize_t	whichformat(const char **format, ssize_t *count, va_list ap)
{
	char	*res;
	char	f;

	f = **format;
	if (f == 'p')
	{
		res = va_arg(ap, void *);
		if (printptr(res, format, count) == -1)
			return (-1);
	}
	if (f == '%')
	{
		if (ft_putchar_prtf('%', 1) == -1)
			return (-1);
		(*format)++;
		(*count)++;
	}
	if (f == 'c' || f == 's')
		if (printchar(format, count, ap) == -1)
			return (-1);
	if (f == 'd' || f == 'i' || f == 'u' || f == 'x' || f == 'X')
		if (printint(format, count, ap) == -1)
			return (-1);
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	ssize_t	count;

	va_start(ap, format);
	count = 0;
	if (!format)
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (whichformat(&format, &count, ap) == -1)
				return (-1);
		}
		else
		{
			if (ft_putchar_prtf(*format, 1) == -1)
				return (-1);
			count++;
			format++;
		}
	}
	va_end(ap);
	return (count);
}
