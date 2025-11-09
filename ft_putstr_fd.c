/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khelaasr <khelaasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 13:09:00 by khelaasr          #+#    #+#             */
/*   Updated: 2025/11/06 11:06:35 by khelaasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
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
}
/*int main()
{
	int fd;

	fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	ft_putstr_fd("Hello, World!", fd);
	close(fd);
	return (0);
}*/
