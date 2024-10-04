/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanmar2 <@student.42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 18:44:53 by juanmar2          #+#    #+#             */
/*   Updated: 2024/10/04 19:30:17 by juanmar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	character;
	unsigned char	*ptr;	

	i = 0;
	character = (unsigned char) c;
	ptr = (unsigned char *) s;
	while (i < n)
	{
		if (ptr[i] == character)
			return ((void *)&ptr[i]);
		i++;
	}
	return (NULL);
}

/*#include <stdio.h>
int	main(void)
{
	int	numbers[] = {1, 2, 3, 4};

	printf("%p\n", &numbers[2]);
	printf("%p\n", ft_memchr(numbers, 3, sizeof(numbers)));
	return (0);	
}*/
