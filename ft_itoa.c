/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanmar2 <@student.42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 10:13:13 by juanmar2          #+#    #+#             */
/*   Updated: 2024/10/14 19:09:36 by juanmar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	nbr_len(long n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static char	*str_mem(int len)
{
	char	*mem;

	mem = malloc((len + 1) * sizeof(char));
	if (!mem)
		return (NULL);
	mem[0] = '0';
	return (mem);
}

char	*ft_itoa(int n)
{
	int		len;
	int		i;
	char	*result;
	long	nbr;

	nbr = n;
	len = nbr_len(nbr);
	result = str_mem(len);
	if (!result)
		return (NULL);
	if (nbr < 0)
		nbr *= -1;
	i = len - 1;
	while (nbr != 0)
	{
		result[i] = ((nbr % 10) + 48);
		nbr /= 10;
		i--;
	}
	if (n < 0)
		result[0] = '-';
	result[len] = '\0';
	return (result);
}

/*#include <stdio.h>
int	main(void)
{
	printf("se espera 5 <len:-5432>: %d\n", nbr_len(-5432));
	printf("se espera 1 <len:0>: %d\n", nbr_len(0));
	printf("se espera 5432: %s\n", ft_itoa(5432));
	printf("se espera 0: %s\n", ft_itoa(0));
	printf("se espera 1: %s\n", ft_itoa(1));
	printf("se espera -2147483648: %s\n", ft_itoa(-2147483648));
	return (0);
}*/
