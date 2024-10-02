/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanmar2 <@student.42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 20:15:06 by juanmar2          #+#    #+#             */
/*   Updated: 2024/10/02 20:23:25 by juanmar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;

	i = 0;
	if (size < 1)
		return (0);
	while (i < size -1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

/*#include <stdio.h>

int	main(void)
{
	char str1[] = "Hola mundo";
	char str2[20];
	
	ft_strlcpy(str2, str1, sizeof(str2));
	printf("String: %s\n", str2);
	if (str2[10] == '\0')
		printf("OK\n");
	return (0);
}*/
