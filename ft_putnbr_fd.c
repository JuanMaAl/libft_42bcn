/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanmar2 <@student.42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 19:02:27 by juanmar2          #+#    #+#             */
/*   Updated: 2024/10/14 19:20:45 by juanmar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*s;

	s = ft_itoa(n);
	ft_putstr_fd(s, fd);
}

/*#include <fcntl.h>

int	main(void)
{
	int	n = -424242;
	int	fd = open("./test.txt", O_WRONLY);
	ft_putnbr_fd(n, fd);
	close(fd);
	return (0);
}*/
