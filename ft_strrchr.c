/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanmar2 <@student.42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 19:02:39 by juanmar2          #+#    #+#             */
/*   Updated: 2024/10/15 12:36:26 by juanmar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (i > 0)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i--;
	}
	if (s[i] == (unsigned char)c)
		return ((char *)&s[i]);
	return (NULL);
}

/*#include <stdio.h>
int	main(void)
{
	char	*str = "Holo";

	printf("%p\n", &str[3]);
	printf("%p\n", ft_strrchr(str, 'o'));
	printf("%p\n", &str[4]);
	printf("%p\n", ft_strrchr(str, '\0'));
	return (0);
}*/
