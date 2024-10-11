/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanmar2 <@student.42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 11:58:41 by juanmar2          #+#    #+#             */
/*   Updated: 2024/10/11 12:31:08 by juanmar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*s2;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	s2 = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!s2)
		return (NULL);
	while (s[i])
	{
		s2[i] = f(i, s[i]);
		i++;
	}
	s2[i] = 0;
	return (s2);
}

/*#include <stdio.h>
char	two_more(unsigned int n, char c)
{
	n++;
	n--;
	return(c + 2);
}

int	main(void)
{
	printf("Se espera <cdef>: %s\n", ft_strmapi("abcd", two_more));
	return (0);
}*/
