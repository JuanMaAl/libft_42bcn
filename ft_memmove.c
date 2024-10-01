/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanmar2 <@student.42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:01:18 by juanmar2          #+#    #+#             */
/*   Updated: 2024/10/01 14:31:05 by juanmar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*p_src;
	char		*p_dst;
	size_t		i;

	if (!src && !dst)
		return (NULL);
	p_src = (char *)src;
	p_dst = (char *)dst;
	i = 0;
	if (p_dst > p_src)
	{
		while (len > 0)
		{
			p_dst[len -1] = p_src[len -1];
			len--;
		}
		return (dst);
	}
	while (i < len)
	{
		p_dst[i] = p_src[i];
		i++;
	}
	return (dst);
}

/*#include <stdio.h>
int	main(void)
{
	char	string1[] = "abcde";
	char	string2[] = "abcde";
	char	string3[] = "abcde";
	char	string4[] = "zzzzz";
	char	string5[] = "abcde";
	char	string6[] = "zzzzz";
	
	ft_memcpy(&string1[2], string1, 3);
	printf("String1 <ababc> ft_memcpy fails <ababa>: %s\n", string1);
	ft_memmove(&string2[2], string2, 3);
	printf("String2 <ababc> ft_memmove: %s\n", string2);
	ft_memcpy(string4, string3, 4);
	printf("String4 <abcdz> ft_memcpy: %s\n", string4);
	ft_memmove(string6, string5, 4);
	printf("String6 <abcdz> ft_memmove: %s\n", string6);
	return (0);
}*/
