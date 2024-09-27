/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanmar2 <@student.42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 14:59:54 by juanmar2          #+#    #+#             */
/*   Updated: 2024/09/27 15:09:50 by juanmar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}

/*#include <stdio.h>
int	main(int argc, char **argv)
{
	--argc;
	int	is_an;

	is_an = ft_isalnum(argv[1][0]);
	printf("The character %c is alnum? %d\n", argv[1][0], is_an);
	return (0);
}*/
