#include <strings.h>
#include <stdio.h>
#include <bsd/string.h>
#include "../libft.h"

int main(void)
{
	char *s1 = "abcdef";
	char *s2 = "umdois";

	printf("Strings: S1 = %s S2 = %s\n", s1, s2);
	printf("Deles: %zu\n", strlcat(s1, s2, 6));
	printf("-----------------------------------\n");
	printf("Strings: S1 = %s S2 = %s\n", s1, s2);

	
	char *s3 = "abcdef";
	char *s4 = "umdois";
	printf("Strings: S1 = %s S2 = %s\n", s3, s4);
	printf("Meu: %zu\n", ft_strlcat(s1, s2, 6));
	printf("-----------------------------------\n");
	printf("Strings: S1 = %s S2 = %s\n", s3, s4);
	return (0);
}
