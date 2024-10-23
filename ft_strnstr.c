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
	size_t	j;

	i = 0;
	if (!little[0])
		return ((char *)big);
	while (big[i])
	{
		j = 0;
		while (big[i + j] == little[j] && i + j < len)
		{
			if (!big[i + j] && !little[j])
				return ((char *)&big[i]);
			j++;
		}
		if (!little[j])
			return ((char *)&big[i]);
		i++;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	string[] = "Hola mundo tremebundo";
	char	string2[] = "Hola munda tremebundo";
	printf("%p\n", &string[5]);
	printf("%c\n", string[5]);
	printf("%p\n", ft_strnstr(string, "mundo", sizeof(string)));
	if (ft_strnstr(string2, "mundo", sizeof(string2)) == NULL)
		printf("OK\n");
	return (0);
}*/
