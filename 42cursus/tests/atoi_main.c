#include <stdio.h>
#include "../libft.h"

int	main(void)
{
	printf("ORIGINAL:\n");
	printf("%d\n", atoi("-+48"));
	printf("%d\n", atoi("--47"));
	printf("%d\n", atoi("++47"));
	printf("\n--------------------\n");
	printf("MEU:\n");
	printf("%d\n", ft_atoi("-+48"));
	printf("%d\n", ft_atoi("--47"));
	printf("%d\n", ft_atoi("++47"));
	return (0);
}
