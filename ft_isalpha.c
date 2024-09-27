/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanmar2                                   +#+  +:+       +#+        */
/*      <juanmar2@student.42barcelona.com>        +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:10:14 by juanmar2          #+#    #+#             */
/*   Updated: 2024/09/27 10:53:28 by juanmar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	int	is_super;
	int	is_lower;

	is_super = (c >= 65 && c <= 90);
	is_lower = (c >= 97 && c <= 122);
	if (is_super || is_lower)
		return (1);
	else
		return (0);
}

/*#include <stdio.h> 
int	main(int argc, char **argv)
{	
	int char_alpha;

	--argc;
	char_alpha = ft_isalpha(argv[1][0]);
	printf("the character -> %c is alpha: %d\n", argv[1][0], char_alpha);
	return (0);
}*/
