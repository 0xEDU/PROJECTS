#include <stdio.h>
#include "../libft.h"
#include <bsd/string.h>

int	main(void)
{
	printf("ORIGINAL:\n");
	printf("%s\n", strnstr("lorem ipsum dolor sit amet", "dolor", 15));
	printf("MEU:\n");
	printf("%s\n", ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15));
	return (0);
}
