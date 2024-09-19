#include <ctype.h>
#include <stdio.h>

int	ft_isalpha(int c);

int	main(void)
{
	printf("h -> %d\n", isalpha('h'));	
	printf("h -> %d\n", ft_isalpha('h'));	
	printf("o -> %d\n", isalpha('o'));	
	printf("o -> %d\n", ft_isalpha('o'));	
	printf("0 -> %d\n", isalpha('0'));	
	printf("0 -> %d\n", ft_isalpha('0'));
	printf("3 -> %d\n", isalpha('3'));	
	printf("3 -> %d\n", ft_isalpha('3'));
	printf("caracter nulo -> %d\n", isalpha('\0'));	
	printf("caracter nulo -> %d\n", ft_isalpha('\0'));
		
	return (0);
}
