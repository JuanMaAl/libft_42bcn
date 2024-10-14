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

static	int	nbr_len(int n)
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
	while (n / 10 > 0)
	{
		n /= 10;
		len++;
	}
	len++;
	return (len);
}

static char	*reverse_str(char *s)
{
	char	*temp;
	int		i;
	int		j;
	int		iss_negative;

	i = 0;
	j = (int)ft_strlen(s) - 1;
	iss_negative = 0;
	temp = malloc((j + 2) * sizeof(char));
	if (!temp)
		return (NULL);
	if (s[0] == '-')
	{
		temp[i++] = s[0];
		++iss_negative;
	}
	while (j >= 0 + iss_negative)
	{
		temp[i] = s[j];
		i++;
		j--;
	}
	temp[i] = 0;
	free(s);
	return (temp);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*str;
	long	j;

	i = 0;
	str = malloc((nbr_len(n) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	j = n;
	if (j < 0)
	{
		str[0] = '-';
		j *= -1;
		i++;
	}
	while (j / 10 > 0)
	{
		str[i] = (j % 10) + 48;
		j /= 10;
		i++;
	}
	str[i] = (j % 10) + 48;
	return (reverse_str(str));
}

/*#include <stdio.h>
int	main(void)
{
	printf("se espera 5 <len:-5432>: %d\n", nbr_len(-5432));
	printf("se espera 1 <len:0>: %d\n", nbr_len(0));
	printf("se espera 5432: %s\n", ft_itoa(5432));
	printf("se espera 0: %s\n", ft_itoa(0));
	printf("se espera -2147483648: %s\n", ft_itoa(-2147483648));
	return (0);
}*/
