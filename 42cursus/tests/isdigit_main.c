#include <ctype.h>
#include <stdio.h>

int	ft_isdigit(int c);

int	main(int argc, char *argv[])
{
	/*int i = 1;

	while(argv[i])
	{
		printf("%d\n", isalpha(*argv[i]));
		i++;
	} */
	printf("%d\n", isdigit('4'));
	printf("%d\n", ft_isdigit('4'));
	return (0);
}