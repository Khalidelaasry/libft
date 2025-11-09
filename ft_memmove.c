/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khelaasr <khelaasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 16:38:42 by khelaasr          #+#    #+#             */
/*   Updated: 2025/11/03 18:01:18 by khelaasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*dest;
	unsigned char	*s;
	size_t			i;

	if (dst == src)
		return (dst);
	dest = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = 0;
	if (dest > s)
	{
		while (n-- > 0)
			dest[n] = s[n];
	}
	else
	{
		while (i < n)
		{
			dest[i] = s[i];
			i++;
		}
	}
	return (dst);
}
