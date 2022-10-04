#include <ctype.h>
#include <stdio.h>

int	ft_isascii(int c);

int	main(void)
{
	/*int i = 1;

	while(argv[i])
	{
		printf("%d\n", isalpha(*argv[i]));
		i++;
	} */
	printf("%d\n", isascii('\n'));
	printf("%d\n", ft_isascii('\n'));
	return (0);
}