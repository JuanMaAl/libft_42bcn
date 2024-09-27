/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanmar2 <@student.42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 14:45:24 by juanmar2          #+#    #+#             */
/*   Updated: 2024/09/27 14:45:33 by juanmar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

/*#include <stdio.h>
int	main(int argc, char **argv)
{
	--argc;
	int is_dig = ft_isdigit(argv[1][0]);
	printf("the character %c is digit? %d\n", argv[1][0], is_dig);
	return (0);
}*/
