/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khelaasr <khelaasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 15:39:54 by khelaasr          #+#    #+#             */
/*   Updated: 2025/11/06 10:57:39 by khelaasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_char(char *s, unsigned int number, long int len)
{
	int	digit;

	while (number > 0)
	{
		digit = number % 10;
		s[len] = digit + '0';
		number = number / 10;
		len = len - 1;
	}
	return (s);
}

static long int	ft_len(int n)
{
	long int	len;
	long int	num;

	num = n;
	len = 0;
	if (num <= 0)
	{
		len = 1;
		num = -num;
	}
	while (num != 0)
	{
		len++;
		num = num / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*s;
	long int		len;
	unsigned int	number;
	int				sign;

	sign = 1;
	len = ft_len(n);
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (!(s))
		return (NULL);
	s[len--] = '\0';
	if (n == 0)
		s[0] = '0';
	if (n < 0)
	{
		sign *= -1;
		number = n * -1;
		s[0] = '-';
	}
	else
		number = n;
	s = ft_char(s, number, len);
	return (s);
}
/*int main()
{
	int number = -12345;
	char *str = ft_itoa(number);
	if (str != NULL)
	{
		printf("The string representation of %d is: %s\n", number, str);
		free(str);
	}
	return (0);
}*/
