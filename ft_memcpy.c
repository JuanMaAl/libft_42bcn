/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanmar2 <@student.42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 20:54:58 by juanmar2          #+#    #+#             */
/*   Updated: 2024/09/30 20:57:54 by juanmar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*pd;
	char	*ps;
	size_t	i;

	i = 0;
	pd = (char *)dest;
	ps = (char *)src;
	while (i < n)
	{
		pd[i] = ps[i];
		i++;
	}
	return (dest);
}

/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char string1[10] = "Hello";
	char string2[10] = "42";
	printf("string2 before ft_memcpy: %s\n", string2);
	ft_memcpy((void *)string2, string1, 5);
	printf("string2 after ft_memcpy: %s\n", string2);
	return (0);	
}*/
