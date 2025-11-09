/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khelaasr <khelaasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 18:36:01 by khelaasr          #+#    #+#             */
/*   Updated: 2025/11/06 10:37:50 by khelaasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len_dest;
	size_t	len_src;
	size_t	i;

	i = 0;
	len_src = ft_strlen(src);
	if (!dest && size == 0)
		return (len_src);
	len_dest = ft_strlen(dest);
	if (size <= len_dest)
		return (size + len_src);
	while (src[i] && (len_dest + i < size - 1))
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (len_dest + len_src);
}
/*int main()
{
	char dest[20] = "Hello, ";
	const char *src = "World!";
	size_t size = 15;

	size_t result = ft_strlcat(dest, src, size);
	printf("Resulting length: %zu\n", result);
	printf("Concatenated string: %s\n", dest);

	return (0);
}*/
