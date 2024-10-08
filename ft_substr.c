/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanmar2 <@student.42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 10:20:34 by juanmar2          #+#    #+#             */
/*   Updated: 2024/10/08 10:32:55 by juanmar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*substr;

	i = 0;
	substr = malloc((len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	while ((i < len -1) && s[i])
	{
		substr[i] = s[start];
		start++;
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

/*#include <stdio.h>
int	main(void)
{
	char	*str1 = "Hola mundo tremebundo!";
	char	*str2;
	str2 = ft_substr(str1, 5, 5);
	printf("se espera <mund>: %s\n", str2);
	return (0);
}*/
