#include <stdio.h>
#include <bsd/string.h>
#include "../libft.h"

int	main(void)
{
	char *dest1;
	char *dest2;

	dest1 = (char *)malloc(sizeof(*dest1) * 15);
	dest2 = (char *)malloc(sizeof(*dest2) * 15);
	printf("ORIGINAL:\n");
	printf("%zu\n", strlcpy(dest1, "lorem", 0));
	printf("DEST1 === %s\n", dest1);
	printf("LEN === %zu\n", ft_strlen(dest1));
	printf("\nMEU:\n");
	printf("%zu\n", ft_strlcpy(dest2, "lorem", 0));
	printf("DEST2 === %s\n", dest2);
	printf("LEN === %zu\n", ft_strlen(dest2));
	return (0);
}
