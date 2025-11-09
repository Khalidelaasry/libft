/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khelaasr <khelaasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 19:27:57 by khelaasr          #+#    #+#             */
/*   Updated: 2025/11/06 10:40:49 by khelaasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*new;

	i = 0;
	if (!s || !f)
		return (NULL);
	new = malloc(ft_strlen(s) + 1);
	if (!new)
		return (NULL);
	while (s[i])
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
/*int main()
{
	char	*str = "hello";
	char	*result;

	char	to_upper(unsigned int index, char c)
	{
		if (c >= 'a' && c <= 'z')
			return (c - 32);
		return (c);
		(void)index;
	}

	result = ft_strmapi(str, to_upper);
	printf("%s\n", result);
	free(result);
	return (0);
}*/
