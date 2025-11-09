/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khelaasr <khelaasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 16:01:22 by khelaasr          #+#    #+#             */
/*   Updated: 2025/11/06 10:17:34 by khelaasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int value, size_t num)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = s;
	while (i < num)
	{
		ptr[i] = (unsigned char)value;
		i++;
	}
	return (s);
}
