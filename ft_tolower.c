/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanmar2 <@student.42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 21:26:12 by juanmar2          #+#    #+#             */
/*   Updated: 2024/10/02 21:31:15 by juanmar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	else
		return (c);
}

/*#include <stdio.h>
int	main(void)
{
	printf("A se espera a: %c\n", ft_tolower('A'));
	printf("Z se espera z: %c\n", ft_tolower('Z'));
	printf("64 se espera @: %c\n", ft_tolower(64));
	printf("91 se espera [: %c\n", ft_tolower(91));
	return (0);	
}*/
