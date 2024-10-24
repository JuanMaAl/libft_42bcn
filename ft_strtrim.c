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

static char	*new_str(const char *s1, size_t start, size_t len)
{
	char	*str;
	size_t	i;

	if (len <= 0 || start >= ft_strlen(s1))
		return (ft_strdup(""));
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s1[start + i];
		i++;
	}
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(s1) - 1;
	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	while (ft_isset(s1[i], set))
		i++;
	while (ft_isset(s1[j], set))
		j--;
	return (new_str(s1, i, j - (i - 1)));
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
