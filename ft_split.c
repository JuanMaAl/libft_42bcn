/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanmar2 <@student.42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 16:20:34 by juanmar2          #+#    #+#             */
/*   Updated: 2024/10/24 20:16:40 by juanmar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_size(char const *s, int start, char c)
{
	size_t	size;

	size = 0;
	while (s[start] && s[start] != c)
	{
		size++;
		start++;
	}
	return (size);
}

static int	count_words(char const *s, char c)
{
	int	counter;
	int	i;
	int	on_off;

	counter = 0;
	i = 0;
	on_off = 0;
	while (s[i])
	{
		if (s[i] != c && on_off == 0)
		{
			counter++;
			on_off = 1;
		}
		else if (s[i] == c)
			on_off = 0;
		i++;
	}
	return (counter);
}

char	**error_free(char **str, int counter)
{
	while (counter >= 0)
	{
		free(str[counter]);
		counter--;
	}
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		words;
	char	**str;
	int		i;
	int		j;	

	words = count_words(s, c);
	str = malloc((words + 1) * sizeof (char *));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (j < words)
	{
		while (s[i] == c)
			i++;
		str[j] = ft_substr(s, i, word_size(s, i, c));
		if (!str[j])
			return (error_free(str, j));
		j++;
		i += word_size(s, i, c);
	}
	str[j] = 0;
	return (str);
}

/*#include <stdio.h>
int	main(void)
{
	char	*str = "Hola1#Hola2###Hola3#####Hola4####";
	char	**strings;
	printf("Se espera 4: %d\n", count_words(str, '#'));
	strings = ft_split(str, '#');
	printf("Se espera Hola1: %s\n", strings[0]);
	printf("Se espera Hola2: %s\n", strings[1]);
	printf("Se espera Hola3: %s\n", strings[2]);
	printf("Se espera Hola4: %s\n", strings[3]);
	printf("Se espera Null: %s\n", strings[4]);
	return (0);
}*/
