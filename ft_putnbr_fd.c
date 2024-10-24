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
	char	c;
	long	nbr;

	c = '0';
	nbr = n;
	if (nbr < 0)
	{
		write(fd, "-", 1);
		nbr *= -1;
	}
	if (nbr >= 10)
	{
		ft_putnbr_fd(nbr / 10, fd);
		nbr %= 10;
	}
	if (nbr < 10)
	{
		c = nbr + 48;
		write(fd, &c, 1);
	}
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
