#include <ctype.h>
#include <stdio.h>

int	ft_isprint(int c);

int	main(void)
{
	int	i;

	i = 0;
	while (i < 230)
	{
		printf("%d\n", isprint(i));
		printf("%d\n", ft_isprint(i));
		printf("###################\n");
		i++;
	}
	return (0);
}
