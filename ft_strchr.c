/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanmar2 <@student.42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 18:17:59 by juanmar2          #+#    #+#             */
/*   Updated: 2024/10/15 12:34:06 by juanmar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr_c;

	ptr_c = (char *)s;
	while (*ptr_c != '\0')
	{
		if (*ptr_c == (unsigned char)c)
			return (ptr_c);
		ptr_c++;
	}
	if (*ptr_c == (unsigned char)c)
		return (ptr_c);
	return (NULL);
}

/*#include <stdio.h>

int	main(void)
{
	char	*str = "Hola";
	printf("%p\n", &str[2]);
	printf("%p\n", ft_strchr(str, 'l'));
	printf("%p\n", &str[4]);
	printf("%p\n", ft_strchr(str, '\0'));
	return (0);
}*/
