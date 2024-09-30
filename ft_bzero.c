/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanmar2 <@student.42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 19:18:21 by juanmar2          #+#    #+#             */
/*   Updated: 2024/09/30 19:27:43 by juanmar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*p;
	size_t	i;

	p = (char *)s;
	i = 0;
	while (i < n)
		p[i++] = 0;
}

/*#include <stdio.h>
int	main(void)
{
	char	string1[8] = "Hola 42";
	printf("string1 = %s\n", string1);
	ft_bzero(string1, 7);
	printf("string1 despues de ft_bzero = %s\n", string1);
	return (0);	
}*/
