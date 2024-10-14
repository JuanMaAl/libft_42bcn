/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanmar2 <@student.42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 18:16:31 by juanmar2          #+#    #+#             */
/*   Updated: 2024/10/14 18:29:04 by juanmar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*#include <fcntl.h>
int	main(void)
{
	int	fd;
	fd = open("./test.txt", O_WRONLY);
	ft_putchar_fd('Z', fd);
	close(fd);
	return (0);
}*/
