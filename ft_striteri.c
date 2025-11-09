/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khelaasr <khelaasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 19:40:51 by khelaasr          #+#    #+#             */
/*   Updated: 2025/11/06 10:31:59 by khelaasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*#include <stdio.h>

void	to_upper(unsigned int index, char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 32;
	(void)index;
}

int	main(void)
{
	char str[] = "hello world!";
	ft_striteri(str, to_upper);
	printf("%s\n", str);
	return (0);
}*/
