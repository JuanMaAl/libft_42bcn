/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanmar2 <@student.42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:10:17 by juanmar2          #+#    #+#             */
/*   Updated: 2024/09/30 17:41:42 by juanmar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

/*#include <stdio.h>
int	main(void)
{
	printf("The character ! is printable? %d\n", ft_isprint(32));
	printf("The character ~ is printable? %d\n", ft_isprint(126));
	printf("The character NUL is printable? %d\n", ft_isprint(0));
	printf("The character DEL is printable? %d\n", ft_isprint(127));
	return (0);
}*/
