#include <ctype.h>
#include <stdio.h>

int	ft_isprint(int c);

int	main(void)
{
	/*int i = 1;

	while(argv[i])
	{
		printf("%d\n", isalpha(*argv[i]));
		i++;
	} */
	printf("%d\n", isprint(127));
	printf("%d\n", ft_isprint(127));
	return (0);
}