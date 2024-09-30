/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanmar2 <@student.42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:04:40 by juanmar2          #+#    #+#             */
/*   Updated: 2024/09/30 17:04:57 by juanmar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/*#include <stdio.h>
int	main(int argc, char **argv)
{	
	int is_nb_ascii;

	is_nb_ascii = ft_isascii(argv[1][0]);
	--argc;
	printf("the character %s is ascii? %d\n", argv[1], is_nb_ascii);
	return (0);
}*/
