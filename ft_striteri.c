/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanmar2 <@student.42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:02:20 by juanmar2          #+#    #+#             */
/*   Updated: 2024/10/11 13:46:53 by juanmar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*#include <stdio.h>
void	plus_two(int n, char* s)
{
	n++;
	n--;
	s[0] += 2;
}

int	main(void)
{
	char	str[] = "abc";
	void	*f = plus_two;
	ft_striteri(str, f);
	printf("Se espera cde: %s\n", str);
	return (0);
}*/
