#include <ctype.h>
#include <stdio.h>

int	ft_isalpha(int c);

int	main(int argc, char *argv[])
{
	/*int i = 1;

	while(argv[i])
	{
		printf("%d\n", isalpha(*argv[i]));
		i++;
	} */
	printf("%d\n", isalpha(-10));
	printf("%d\n", ft_isalpha(-10));
	return (0);
}
