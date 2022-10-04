#include <stdio.h>
#include "../libft.h"

int	main(void)
{
	char	*str;

	str = ft_strtrim("tripouille   xxx", " x");
	printf("%s\n", str);
	return (0);
}
