#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size);

int	main(void)
{
	int *p1, *p2, i, n;
	n = 10;
	
	p1 = calloc(10, sizeof(int));
	p2 = ft_calloc(10, sizeof(int));
	printf("------CALLOC ORIGINAL------\n");
	for (i = 0; i < n; ++i)
		printf("%d", p1[i]);
	printf("\n%p\n\n", p1);
	printf("\n------MEU CALLOC------\n");
	for (i = 0; i < n; ++i)
		printf("%d", p2[i]);
	printf("\n%p\n\n", p2);
	printf("\n");
	free(p1); free(p2);
	return 0;
}
