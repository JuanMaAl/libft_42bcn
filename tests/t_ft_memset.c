#include <stdio.h>
#include <string.h>
#include <unistd.h>
void	**ft_memset(void *s, int c, size_t n);

int     main(void)
{
        // Test1
	char str[10] = "Hola";
	char str2[10] = "Hola";
	//Test2
	char *string;
	char *string2;
	char buffer[21];
	char buffer2[21];
        
	// Test1 
	memset(str, '*' , 5);
        ft_memset(str2, '*' , 5);
        printf("%s\n", str);
        printf("%s\n", str2);
	
	//Test2 memset
	memset(buffer, 0, sizeof(buffer));
	string = (char *) memset (buffer, 'A', 10);
	printf("\nBuffer contents: %s\n", string);
	memset(buffer+10, 'B', 10);
	printf("\nBuffer contents: %s\n", buffer);
	//Test2 ft_menset
	memset(buffer2, 0, sizeof(buffer2));
	string2 = (char *) memset (buffer2, 'A', 10);
	printf("\nBuffer contents: %s\n", string2);
	memset(buffer2+10, 'B', 10);
	printf("\nBuffer contents: %s\n", buffer2);

        return (0);
}

