void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	swap;

	a = 0;
	while (a < (size / 2))
	{
		swap = tab[a];
		tab[a] = tab[size - 1 - a];
		tab[size - 1 - a] = swap;
		a++;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	int	tab[] = {0, 1, 2, 3, 4};
	int	size = 5;

	ft_rev_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4]);
	return (0);
}*/
