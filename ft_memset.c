/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanmar2 <@student.42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:32:24 by juanmar2          #+#    #+#             */
/*   Updated: 2024/09/30 19:01:12 by juanmar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
		p[i++] = (unsigned char)c;
	return (s);
}

/*#include <stdio.h>
int	main(void)
{
	char	str1[4] = "Hola";

	printf("str1 = %s\n", str1);
	ft_memset(str1, 'z', 4);
	printf("str1 despues de ft_memset(str1, z, 4): %s\n", str1);
	return (0);
}*/
