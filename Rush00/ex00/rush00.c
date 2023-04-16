
void	ft_putchar(char c);

void	printrush(int length, char first, char middle, char last)
{
	int	word_counter;

	word_counter = 1;
	while (word_counter <= length)
	{
		if (word_counter == 1)
			ft_putchar(first);
		else if (word_counter == length)
			ft_putchar(last);
		else
			ft_putchar(middle);
		word_counter++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	line_counter;

	line_counter = 1;
	if (x >= 1 && y >= 1)
	{
		while (line_counter <= y)
		{
			if (line_counter == 1)
				printrush(x, 'o', '-', 'o');
			else if (line_counter == y)
				printrush(x, 'o', '-', 'o');
			else
				printrush(x, '|', ' ', '|');
			line_counter++;
		}
	}
}
