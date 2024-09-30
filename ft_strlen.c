/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanmar2 <@student.42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:15:29 by juanmar2          #+#    #+#             */
/*   Updated: 2024/09/30 18:24:16 by juanmar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

/*#include <string.h>
#include <stdio.h>
int	main(void)
{
	printf("strlen(Hola Mundo): %lu\n", strlen("Hola Mundo"));
	printf("ft_strlen(Hola Mundo): %lu\n", ft_strlen("Hola Mundo"));
	printf("strlen(nulo): %lu\n", strlen("\0"));
	printf("ft_strlen(nulo): %lu\n", ft_strlen("\0"));
	return (0);
}*/
