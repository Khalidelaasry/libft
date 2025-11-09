/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khelaasr <khelaasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 10:35:25 by khelaasr          #+#    #+#             */
/*   Updated: 2025/11/06 11:03:46 by khelaasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return (((unsigned char *)s) + i);
		i++;
	}
	return (NULL);
}
/*int main()
{
	const char str[] = "Hello, World!";
	int c = 'W';
	size_t n = 13;

	char *result = (char *)ft_memchr(str, c, n);
	if (result != NULL)
		printf("Character found: %c\n", *result);
	return (0);
}*/
