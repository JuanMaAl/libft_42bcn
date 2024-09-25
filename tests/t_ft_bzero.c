#include <unistd.h>
#include <strings.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n);

int	main(void)
{
	char	str1[50] = "Hello World";
	char	str2[50] = "Hello World";

	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("\n");
	ft_bzero(str1, sizeof(str1));
	bzero(str2, sizeof(str2));
	printf("%s\n", str1);
	printf("%s\n", str2);
	return (0);
}
