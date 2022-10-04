#include <string.h>
#include <stdio.h>

size_t	ft_strlen(const char *s);

int	main(void)
{
	char *c = "baralho";
	printf("%lu\n", strlen(c));
	printf("%lu\n", ft_strlen(c));
	return (0);
}