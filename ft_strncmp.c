/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanmar2 <@student.42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 20:12:24 by juanmar2          #+#    #+#             */
/*   Updated: 2024/10/24 20:47:09 by juanmar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if ((unsigned char)s1[i] < (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		if ((unsigned char)s1[i] > (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

/*#include <string.h>
#include <stdio.h>

int	main(void)
{
	printf("strncmp: %d\n", strncmp("Hola", "Holas", 4));
	printf("ft_strncmp: %d\n", ft_strncmp("Hola", "Holas", 4));
	printf("strncmp: %d\n", strncmp("Hola", "Holo", 4));
	printf("ft_strncmp: %d\n", ft_strncmp("Hola", "Holo", 4));
	printf("strncmp: %d\n", strncmp("Ho", "Hola", 4));
	printf("ft_strncmp: %d\n", ft_strncmp("Ho", "Hola", 4));
	printf("strncmp: %d\n", strncmp("Hola", "", 4));
	printf("ft_strncmp: %d\n", ft_strncmp("Hola", "", 4));
	printf("strncmp: %d\n", strncmp("", "Hola", 4));
	printf("ft_strncmp: %d\n", ft_strncmp("", "Hola", 4));
	printf("strncmp: %d\n", strncmp("", "", 4));
	printf("ft_strncmp: %d\n", ft_strncmp("", "", 4));
	return (0);
}*/
