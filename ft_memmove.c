/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanmar2                                   +#+  +:+       +#+        */
/*      <juanmar2@student.42barcelona.com>        +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 20:34:36 by juanmar2          #+#    #+#             */
/*   Updated: 2024/09/26 21:43:45 by juanmar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*p_src;
	char		*p_dst;
	unsigned int	i;

	i = 0;
	if(!src && !dst)
		return(NULL); 
	p_src = (char *)src;
	p_dst = (char *)dst;
	else if(p_dst > p_src) 
	{
		printf("Estamos en el if\n");
		while (len > 0)
		{
			p_dst[len] = p_src[len];
			len--;
		}
	}
	else
	{
		printf("Estamos en el else\n");
		while(i < len)
		{
			p_dst[i] = p_src[i];
			i++;
		}
	}
	return (dst);
}
