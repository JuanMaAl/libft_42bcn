#include <string.h>
#include <stdio.h>

size_t	ft_strlen(const char *s);

int	main(void)
{
	printf("%zu\n", strlen("Hola mundo!"));
	printf("%zu\n", ft_strlen("Hola mundo!"));
	printf("%zu\n", strlen(""));
	printf("%zu\n", ft_strlen(""));
	printf("%zu\n", strlen(" "));
	printf("%zu\n", ft_strlen(" "));
	printf("%zu\n", strlen("Hola Mundo\0Jaja\0jojo"));
	printf("%zu\n", ft_strlen("Hola Mundo\0Jaja\0jojo"));
	return (0);
}
