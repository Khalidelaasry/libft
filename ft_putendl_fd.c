/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khelaasr <khelaasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 13:12:43 by khelaasr          #+#    #+#             */
/*   Updated: 2025/11/06 10:21:57 by khelaasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}
/*#include <fcntl.h>
int	main(void)
{
	int fd;
	fd = open("test.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	ft_putendl_fd("Hello, World!", fd);
	close(fd);
	return (0);
}*/
