int	ft_recursive_factorial(int nb)
{
	int	result;

	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	if (nb > 0)
	{
		result = nb * ft_recursive_factorial(nb - 1);
		return (result);
	}
	else
	{
		return (0);
	}
}
