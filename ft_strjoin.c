/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanmar2 <@student.42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 11:06:29 by juanmar2          #+#    #+#             */
/*   Updated: 2024/10/08 11:19:39 by juanmar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	len;
	unsigned int	i;
	unsigned int	j;
	char			*s3;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	i = -1;
	j = -1;
	s3 = malloc(len * sizeof(char));
	if (!s3)
		return (NULL);
	while (s1[++i])
		s3[i] = s1[i];
	while (s2[++j])
		s3[i++] = s2[j];
	s3[i] = 0;
	return (s3);
}

/*#include <stdio.h>
int	main(void)
{
	char	*s1 = "Hola ";
	char	*s2 = "42!";
	char	*s3;
	s3 = ft_strjoin(s1, s2);
	printf("%s\n", s3);
	if (s3[8] == 0)
		printf("NULL OK\n");
	return (0);
}*/
