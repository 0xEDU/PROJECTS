#include <stdio.h>
#include "../libft.h"
#include <string.h>

int	main(void)
{
	char *s1 = {"test\200"};
	char *s2 = {"test\0"};
	
	printf("\200\n");
	printf("%d\n", strncmp(s1, s2, 6));
	printf("%d\n", ft_strncmp(s1, s2, 6));
	return (0);
}
