#include <ctype.h>
#include <stdio.h>

int	ft_isascii(int c);

int	main(void)
{
	printf("h -> %d\n", isascii('h'));	
	printf("h -> %d\n", ft_isascii('h'));	
	printf("o -> %d\n", isascii('o'));	
	printf("o -> %d\n", ft_isascii('o'));	
	printf("0 -> %d\n", isascii('0'));	
	printf("0 -> %d\n", ft_isascii('0'));
	printf("3 -> %d\n", isascii('3'));	
	printf("3 -> %d\n", ft_isascii('3'));
	printf("caracter nulo -> %d\n", isascii('\0'));	
	printf("caracter nulo -> %d\n", ft_isascii('\0'));
	printf("caracter 127 -> %d\n", isascii(127));	
	printf("caracter 127 -> %d\n", ft_isascii(127));
	printf("caracter 128 -> %d\n", isascii(128));	
	printf("caracter 128 -> %d\n", ft_isascii(128));
	printf("caracter 300 -> %d\n", isascii(300));	
	printf("caracter 300 -> %d\n", ft_isascii(300));
	return (0);
}
