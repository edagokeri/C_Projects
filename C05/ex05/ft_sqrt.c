int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = 1;
	while (sqrt * sqrt <= nb)
	{
		if (sqrt >= 46341)
			return (0);
		else if (sqrt * sqrt == nb)
			return (sqrt);
		sqrt++;
	}
	return (0);
}
