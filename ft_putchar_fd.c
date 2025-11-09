/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khelaasr <khelaasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 13:06:52 by khelaasr          #+#    #+#             */
/*   Updated: 2025/11/06 11:07:03 by khelaasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*int main()
{
	int fd;

	fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	ft_putchar_fd('A', fd);
	close(fd);
	return (0);
}*/
