#include <stdio.h>
#include "../libft.h"

int main()
{
	char	**m;
	char  *s = "abaccccccate coccm uvaca";
	char  c = 'c';

	m = ft_split("  tripouille  42  ", ' ');
	int row, columns;
	for (row=0; row<2; row++)
	{
		printf("%s", m[row]);
		printf("\n");
	}
	free(*m);
	free(*(m + 1));
	free(*(m + 2));
	free(m);
	return 0;
}
