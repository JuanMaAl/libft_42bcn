/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanmar2 <@student.42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 19:36:06 by juanmar2          #+#    #+#             */
/*   Updated: 2024/10/04 19:58:01 by juanmar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ps1;
	unsigned char	*ps2;

	if (n == 0)
		return (0);
	i = 0;
	ps1 = (unsigned char *) s1;
	ps2 = (unsigned char *) s2;
	while (i < n)
	{
		if (ps1[i] < ps2[i])
			return (ps1[i] - ps2[i]);
		if (ps1[i] > ps2[i])
			return (ps1[i] - ps2[i]);
		i++;
	}
	return (0);
}

/*#include <string.h>
#include <stdio.h>

int	main(void)
{
	int	numbers[] = {1,2,3,4};
	int	numbers2[] = {1,2,3,4,5};
	int	numbers3[] = {1,2,3,2};
	int	numbers4[4];
	int	numbers5[4];	
	printf("memcmp: %d\n", memcmp(numbers, numbers2, 40));
	printf("ft_memcmp: %d\n", ft_memcmp(numbers, numbers2, 40));
	printf("memcmp: %d\n", memcmp(numbers, numbers3, 40));
	printf("ft_memcmp: %d\n", ft_memcmp(numbers, numbers3, 40));
	printf("memcmp: %d\n", memcmp(numbers, numbers4, 40));
	printf("ft_memcmp: %d\n", ft_memcmp(numbers, numbers4, 40));
	printf("memcmp: %d\n", memcmp(numbers4, numbers5, 40));
	printf("ft_memcmp: %d\n", ft_memcmp(numbers4, numbers5, 40));
	return (0);
}*/
