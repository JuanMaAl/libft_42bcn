/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanmar2 <@student.42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 20:33:43 by juanmar2          #+#    #+#             */
/*   Updated: 2024/10/04 21:33:08 by juanmar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	char	*ptr;
	size_t	len_little;

	if (!little)
		return ((char *)big);
	i = 0;
	len_little = ft_strlen(little);
	while (i < len)
	{
		if (big[i] == little[0])
		{
			if (ft_strncmp(&big[i], little, len_little) == 0)
			{
				ptr = (char *)&big[i];
				return (ptr);
			}
		}
		i++;
	}
	return (NULL);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	string[] = "Hola mundo tremebundo";
	char	string2[] = "Hola munda tremebundo";
	printf("%p\n", &string[5]);
	printf("%c\n", string[5]);
	printf("test ft_strncmp: %d\n", ft_strncmp(&string[5], 
	"mundo", sizeof("mundo") - 1));
	printf("test strncmp: %d\n", strncmp(&string[5], 
	"mundo", sizeof("mundo") - 1));
	printf("%p\n", ft_strnstr(string, "mundo", sizeof(string)));
	if (ft_strnstr(string2, "mundo", sizeof(string2)) == NULL)
		printf("OK\n");
	return (0);
}*/
