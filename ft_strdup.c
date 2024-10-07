/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanmar2 <@student.42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:45:41 by juanmar2          #+#    #+#             */
/*   Updated: 2024/10/07 18:14:36 by juanmar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	int		len;

	len = ft_strlen(s) + 1;
	ptr = malloc (len * sizeof(char));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s, len);
	return (ptr);
}

/*#include <stdio.h>
int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "Hola mundo!";
	s2 = ft_strdup(s1);
	printf("%s\n", s1);
	printf("%s\n", s2);
	return (0);
}*/
