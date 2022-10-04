#include <string.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n);

int	main(void)
{
    char str1[15] = "original";

    printf("\nBefore: %s\n", str1);
	ft_bzero(str1, 100000*sizeof(char));
//    bzero(str1, 100000*sizeof(char));
    printf("\nAfter:  %s\n", str1);
	return (0);
}
