/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanmar2 <@student.42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 16:20:34 by juanmar2          #+#    #+#             */
/*   Updated: 2024/10/10 21:09:56 by juanmar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ret_words(char	*s, char c, char **strings, int j)
{
	int		i;
	char	*s2;

	i = 0;
	s2 = NULL;
	while (s[i] != c && s[i] != 0)
		i++;
	s2 = malloc ((i + 2) * sizeof(char));
	if (!s2)
	{
		while (j >= 0)
		{
			free(strings[j]);
			j--;
		}
		return (0);
	}
	i = 0;
	while (s[i] != c && s[i] != 0)
	{
		s2[i] = s[i];
		i++;
	}
	s2[i] = 0;
	return (s2);
}

static int	count_str_chars(char const *s, char c)
{
	int	counter;
	int	i;

	counter = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
			counter++;
		i++;
	}
	return (counter);
}

static int	count_words(char const *s, char c)
{
	int	counter;
	int	i;

	counter = 0;
	i = 0;
	if (s[0] != c)
		counter++;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			counter++;
		i++;
	}
	return (counter);
}

static char	**arr_strs(char const *s, char c, int size)
{
	char	**strs;
	int		i;
	int		j;
	int		k;
	int		nbr_pos;

	strs = malloc(size);
	i = 0;
	j = 0;
	k = 0;
	nbr_pos = count_words(s, c) + 1;
	if (s[0] != c && s[0] != 0)
		strs[j++] = ret_words((char *)&s[0], c, strs, k++);
	while (s[i] && j < nbr_pos)
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			strs[j++] = ret_words((char *)&s[i + 1], c, strs, k++);
		i++;
	}
	strs[j] = 0;
	return (strs);
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	int		size;

	size = count_str_chars(s, c) + 2 * count_words(s, c) + 1;
	strings = malloc(size);
	if (!strings)
		return (0);
	strings = arr_strs(s, c, size);
	return (strings);
}

/*#include <stdio.h>
int	main(void)
{
	char	*str = "Hola1#Hola2###Hola3#####Hola4####";
	char	**strings;
	printf("Se espera 20: %d\n", count_str_chars(str, '#'));
	printf("Se espera 4: %d\n", count_words(str, '#'));
	strings = ft_split(str, '#');
	printf("Se espera Hola1: %s\n", strings[0]);
	printf("Se espera Hola2: %s\n", strings[1]);
	printf("Se espera Hola3: %s\n", strings[2]);
	printf("Se espera Hola4: %s\n", strings[3]);
	printf("Se espera Null: %s\n", strings[4]);
	return (0);
}*/
