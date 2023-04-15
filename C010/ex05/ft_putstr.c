void	ft_putstr(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		write (1, &str[a], 1);
		a++;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	char	*c = "Hello World";

	ft_putstr(c);
}*/
