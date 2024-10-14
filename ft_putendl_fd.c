/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanmar2 <@student.42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 18:47:36 by juanmar2          #+#    #+#             */
/*   Updated: 2024/10/14 18:56:21 by juanmar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
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
	char	*str = "Hola 42 Barcelona";
	int	fd = open("./test.txt", O_WRONLY);
	ft_putendl_fd(str, fd);
	close(fd);
	return (0);
}*/
