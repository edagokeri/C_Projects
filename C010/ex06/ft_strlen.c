int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*c = "Hello World";

	printf("%d", ft_strlen(c));
}*/
