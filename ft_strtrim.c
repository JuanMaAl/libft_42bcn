/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanmar2 <@student.42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 11:25:35 by juanmar2          #+#    #+#             */
/*   Updated: 2024/10/08 15:54:28 by juanmar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static	int	ft_isset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static	char	*reverse_str(char *s)
{
	char	*temp;
	int		i;
	int		j;

	i = 0;
	j = (int)ft_strlen(s) - 1;
	temp = malloc((j + 2) * sizeof(char));
	if (!temp)
		return (NULL);
	while (j >= 0)
	{
		temp[i] = s[j];
		i++;
		j--;
	}
	temp[i] = 0;
	return (temp);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	int		i;
	char	*ptr2;
	char	*ptr3;
	char	*ptr4;

	i = 0;
	while (ft_isset(s1[i], set))
		i++;
	ptr = (char *)&s1[i];
	ptr2 = reverse_str(ptr);
	i = 0;
	while (ft_isset(ptr2[i], set))
		i++;
	ptr3 = &ptr2[i];
	ptr4 = reverse_str(ptr3);
	return (ptr4);
}

/*#include <stdio.h>
int	main(void)
{
	char	*s1 = "PacoHolaPaco";
	char	*set = "Paco";
	char	*s2 = "ababaaaMy name is Simonbbaaabbad";
	char	*set2 = "abd";
	printf("se espera <Hola>: %s\n", ft_strtrim(s1, set));
	printf("se espera <My name is Simon>: %s\n", ft_strtrim(s2, set2));
	return (0);
}*/
