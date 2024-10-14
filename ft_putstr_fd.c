/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanmar2 <@student.42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 18:33:41 by juanmar2          #+#    #+#             */
/*   Updated: 2024/10/14 18:42:05 by juanmar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}

/*#include <fcntl.h>
int	main(void)
{
	char	*str = "Hola mundo tremebundo";
	int	fd = open("./test.txt", O_WRONLY);
	ft_putstr_fd(str, fd);
	close(fd);
	return (0);
}*/
