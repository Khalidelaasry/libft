/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khelaasr <khelaasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 20:35:05 by khelaasr          #+#    #+#             */
/*   Updated: 2025/11/06 11:10:14 by khelaasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	last;

	i = 0;
	last = -1;
	while (s[i])
	{
		if (s[i] == (char)c)
			last = i;
		i++;
	}
	if (c == '\0')
		return ((char *)(s + i));
	if (last != -1)
		return ((char *)(s + last));
	return (NULL);
}
/*int main()
{
	const char *str = "Hello, World!";
	int c = 'o';

	char *result = ft_strrchr(str, c);
	if (result != NULL)
		printf("Last occurrence found: %s\n", result);
	return (0);
}*/
