/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanmar2                                   +#+  +:+       +#+        */
/*      <juanmar2@student.42barcelona.com>        +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:10:14 by juanmar2          #+#    #+#             */
/*   Updated: 2024/09/23 14:29:06 by juanmar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	int	is_super;
	int	is_lower;

	is_super = (c >= 65 && c <= 90);
	is_lower = (c >= 97 && c <= 122);
	if (is_super || is_lower)
		return (1024);
	else
		return (0);
}
