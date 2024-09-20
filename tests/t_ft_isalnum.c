#include <ctype.h>
#include <stdio.h>

int	ft_isalnum(int c);

int	main(void)
{
	printf("h -> %d\n", isalnum('h'));	
	printf("h -> %d\n", ft_isalnum('h'));	
	printf("o -> %d\n", isalnum('o'));	
	printf("o -> %d\n", ft_isalnum('o'));	
	printf("0 -> %d\n", isalnum('0'));	
	printf("0 -> %d\n", ft_isalnum('0'));
	printf("3 -> %d\n", isalnum('3'));	
	printf("3 -> %d\n", ft_isalnum('3'));
	printf("! -> %d\n", isalnum('!'));	
	printf("! -> %d\n", ft_isalnum('!'));
	printf("$ -> %d\n", isalnum('$'));	
	printf("$ -> %d\n", ft_isalnum('$'));
	printf("caracter nulo -> %d\n", isalnum('\0'));	
	printf("caracter nulo -> %d\n", ft_isalnum('\0'));
		
	return (0);
}
