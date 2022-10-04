#include <string.h>
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n);

int	main(void)
{
    char str1[15] = "memset original";
    printf("\nBefore memset(): %s\n", str1);
	
    //memset(str1, 'p', 10*sizeof(char));
    ft_memset(str1, 'p', 10*sizeof(char));
    printf("\nAfter memset():  %s\n", str1);
	return (0);
}