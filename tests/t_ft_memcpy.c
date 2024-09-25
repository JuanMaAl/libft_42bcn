#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n);

int	main(void)
{
	char str1[20] = "Hola mundo";
	char str1t[20] = "Hola mundo";
	char str2[20] = "Adios mundo";
	char str2t[20] = "Adios mundo";
	char str3[20];
	char str4[20];
	char str3t[20];
	char str4t[20];
	char str5[5];
	char str5t[5];
	char str6[5];

	printf("####test copy in a empty string####\n");
	memcpy(str3, str1, sizeof(str1));
	printf("%s\n", str3);
	memcpy(str4, str2, sizeof(str2));
	printf("%s\n", str4);

	printf("####test copy in a empty string my ft_memcpy####\n");
	memcpy(str3t, str1t, sizeof(str1t));
	printf("%s\n", str3t);
	memcpy(str4t, str2t, sizeof(str2t));
	printf("%s\n", str4t);

	printf("####test copy in a not empty string####\n");
	printf("%s\n", str2);
	memcpy(str2, str1, sizeof(str1));
	printf("%s\n", str2);
	
	printf("####test copy in a not empty string my ft_memcpy####\n");
	printf("%s\n", str2t);
	memcpy(str2t, str1t, sizeof(str1t));
	printf("%s\n", str2t);

	printf("####test copy in a to short empty string####\n");
	printf("%s\n", str1);
	memcpy(str5, str1, sizeof(str1));
	printf("%s\n", str5);
	
	printf("####test copy in a to short empty string my ft_memcpy####\n");
	printf("%s\n", str1t);
	memcpy(str5t, str1t, sizeof(str1t));
	printf("%s\n", str5t);

	printf("####test copy with memmove in a to short empty string####\n");
	printf("%s\n", str1);
	memmove(str6, str1, sizeof(str1));
	printf("%s\n", str6);

	printf("####test copy partial in the same string####\n");
	printf("%s\n", str1);
	memcpy(str1, str1 + 2, 5);
	printf("%s\n", str1);	

	printf("####test copy partial in the same string my ft_memcpy####\n");
	printf("%s\n", str1t);
	memcpy(str1t, str1t + 2, 5);
	printf("%s\n", str1t);	

	return (0);
}
