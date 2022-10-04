#include <ctype.h>
#include <stdio.h>

int	ft_isalnum(int c);

int	main(void)
{
	/*int i = 1;

	while(argv[i])
	{
		printf("%d\n", isalpha(*argv[i]));
		i++;
	} */
	printf("%d\n", isalnum('1'));
	printf("%d\n", ft_isalnum('1'));
	return (0);
}