void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	swap;

	while (size >= 0)
	{
		a = 0;
		while (a < size - 1)
		{
			if (tab[a] > tab[a + 1])
			{
				swap = tab[a];
				tab[a] = tab[a + 1];
				tab[a + 1] = swap;
			}
			a++;
		}
		size--;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	int	tab[5] = {9, 1, 5, 3, 7};
	int	size = 5;

	ft_sort_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4]);
	return (0);
}*/
