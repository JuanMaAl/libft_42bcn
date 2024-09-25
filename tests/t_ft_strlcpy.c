#include <string.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

//Gemini function for testing purposses 
size_t gem_strlcpy(char *dst, const char *src, size_t size) {
    size_t i;

    for (i = 0; i < size - 1 && src[i] != '\0'; i++) {
        dst[i] = src[i];
    }

    if (size > 0) {
        dst[i] = '\0';
    }

    return i;// esto esta mal, debe devolver el len de la string source.
}

int	main(void)
{
	char	destiny[10];
	char	destiny2[10];
	char	*source;
	unsigned int	len1;
	unsigned int	len2;

	source = "Hola mundo tremebundo!";
	printf("sizeof destiny %zu\n", sizeof(destiny));
	printf("sizeof destiny2 %zu\n", sizeof(destiny2));
	len1 = gem_strlcpy(destiny, source, sizeof(destiny));
	len2 = ft_strlcpy(destiny2, source, sizeof(destiny2));
	printf("Source: %s\n", source);
	printf("Destiny: %s\n", destiny);
	printf("return of gem_strlcpy: %u\n", len1);
	if(destiny[9] == '\0')
		printf("OK\n");
	printf("#######################\n");	
	printf("Source: %s\n", source);
	printf("Destiny: %s\n", destiny2);
	printf("return of ft_strlcpy: %u\n", len2);
	if(destiny2[9] == '\0')
		printf("OK\n");

	return (0);
}

