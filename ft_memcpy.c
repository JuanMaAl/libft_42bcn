/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanmar2 <@student.42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 20:54:58 by juanmar2          #+#    #+#             */
/*   Updated: 2024/10/01 11:24:49 by juanmar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*pdest;
	unsigned char	*psrc;

	i = 0;
	if (!dest && !src)
	{
		return (0);
	}
	pdest = (unsigned char *) dest;
	psrc = (unsigned char *) src;
	while (i < n)
	{
		pdest[i] = psrc[i];
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char string1[10] = "Hello";
	char string2[10] = "42";
	char *string3 = 0;
	char *string4 = 0;
	printf("string2 before ft_memcpy: %s\n", string2);
	ft_memcpy(string2, string1, 5);
	printf("string2 after ft_memcpy: %s\n", string2);
	if (ft_memcpy(string4, string3, sizeof(string4)) == 0)
		printf("The return of two empty strings is Null oK!\n");
	return (0);	
}*/
