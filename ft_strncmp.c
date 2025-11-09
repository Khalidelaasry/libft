/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khelaasr <khelaasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 10:23:40 by khelaasr          #+#    #+#             */
/*   Updated: 2025/11/06 10:42:28 by khelaasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (s1 == NULL && s2 == NULL)
		return (0);
	if (n == 0)
		return (0);
	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	return (0);
}
/*int main()
{
	const char *str1 = "Hello, World!";
	const char *str2 = "Hello, World!";
	size_t n = 13;

	int result = ft_strncmp(str1, str2, n);
	if (result == 0)
		printf("The strings are equal up to the first %zu characters.\n", n);
	else if (result < 0)
		printf("The first string is less than the second string.\n");
	else
		printf("The first string is greater than the second string.\n");

	return (0);
}*/
