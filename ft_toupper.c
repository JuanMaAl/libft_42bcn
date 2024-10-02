/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanmar2 <@student.42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 21:14:25 by juanmar2          #+#    #+#             */
/*   Updated: 2024/10/02 21:22:12 by juanmar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	else
		return (c);
}

/*#include <stdio.h>
int	main(void)
{
	printf("a se espera A: %c\n", ft_toupper('a'));
	printf("z se espera Z: %c\n", ft_toupper('z'));
	printf("96 se espera `: %c\n", ft_toupper(96));
	printf("123 se espera {: %c\n", ft_toupper(123));
	return (0);
}*/
