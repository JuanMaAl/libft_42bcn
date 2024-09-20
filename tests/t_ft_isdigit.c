#include <ctype.h>
#include <stdio.h>

int	ft_isdigit(int c);

int	main(void)
{
	printf("h -> %d\n", isdigit('h'));	
	printf("h -> %d\n", ft_isdigit('h'));	
	printf("o -> %d\n", isdigit('o'));	
	printf("o -> %d\n", ft_isdigit('o'));	
	printf("0 -> %d\n", isdigit('0'));	
	printf("0 -> %d\n", ft_isdigit('0'));
	printf("3 -> %d\n", isdigit('3'));	
	printf("3 -> %d\n", ft_isdigit('3'));
	printf("caracter nulo -> %d\n", isdigit('\0'));	
	printf("caracter nulo -> %d\n", ft_isdigit('\0'));
		
	return (0);
}
