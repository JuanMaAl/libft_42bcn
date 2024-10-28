/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanmar2 <@student.42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:44:07 by juanmar2          #+#    #+#             */
/*   Updated: 2024/10/28 20:06:25 by juanmar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	dst_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (dst_len >= dstsize)
		dst_len = dstsize;
	if (dst_len == dstsize)
		return (dst_len + src_len);
	if (dstsize > src_len + dst_len)
	{
		ft_memcpy(dst + dst_len, src, src_len + 1);
		return (dst_len + src_len);
	}
	ft_memcpy(dst + dst_len, src, dstsize - dst_len -1);
	dst[dstsize -1] = '\0';
	return (dst_len + src_len);
}

/*#include <stdio.h>
int	main(void)
{
	char	src[] = " Tremebundo";
	char	dst1[5] = "Hola";
	char	dst2[7] = "Hola";
	char	dst3[30] = "Hola";
	
	ft_strlcat(dst1, src, sizeof(dst1));
	printf("String <Hola>: %s\n", dst1);
	ft_strlcat(dst2, src, 100);
	printf("String <Hola Tre>: %s\n", dst2);
	ft_strlcat(dst3, src, sizeof(dst3));
	printf("String <Hola Tremebundo>: %s\n", dst3);
	return (0);
}*/
