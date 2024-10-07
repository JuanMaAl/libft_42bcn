/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanmar2 <@student.42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 15:02:56 by juanmar2          #+#    #+#             */
/*   Updated: 2024/10/07 15:27:10 by juanmar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isspace(int c)
{
	if (c >= 9 && c <= 13)
		return (1);
	if (c == 32)
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (ft_isspace(nptr[i]) == 1)
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + nptr[i] - '0';
		i++;
	}
	result = result * sign;
	return (result);
}

/*#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	printf("   -1342: %d\n", atoi("    -1342"));
	printf("   -1342: %d\n", ft_atoi("    -1342"));
	printf("\n");
	printf("   1342/t5678: %d\n", atoi("    1342\t5678"));
	printf("   1342/t5678: %d\n", ft_atoi("    1342\t5678"));
	printf("\n");
	printf("   1342/t5678: %d\n", atoi("+-91342"));
	printf("   1342/t5678: %d\n", ft_atoi("+-91342"));

	return (0);
}*/
