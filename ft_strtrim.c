/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khelaasr <khelaasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 10:10:14 by khelaasr          #+#    #+#             */
/*   Updated: 2025/11/06 10:54:04 by khelaasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(char const c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	size;
	char	*trimmed;

	if (!s1 || !set)
		return (NULL);
	while (s1)
	{
		if (ft_check(((char)*s1), set) == 1)
			s1++;
		else
			break ;
	}
	size = ft_strlen(s1);
	while (size != 0)
	{
		if (ft_check(s1[size - 1], set) == 1)
			size--;
		else
			break ;
	}
	trimmed = (char *)malloc(sizeof(char) * (size + 1));
	if (!trimmed)
		return (NULL);
	ft_strlcpy(trimmed, (char *)s1, size + 1);
	return (trimmed);
}
/*int main()
{
	char s1[] = "vvv 42 school vvvvv";
	char set[] = "v";
	char *trimmed;

	trimmed = ft_strtrim(s1, set);
	if (!trimmed)
	{
		printf("memory allocation failed\n");
		return (1);
	}
	printf("original: %s\n", s1);
	printf("trimmed: %s\n", trimmed);
	free(trimmed);
	return (0);
}*/
