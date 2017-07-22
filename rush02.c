r(char c);

char	choice(int i, int j, int i_max, int j_max)
{
	if ((i == 0 && j == 0) || (i == 0 && j == j_max))
		return ('A');
	else if ((i == i_max && j == 0) || (i == i_max && j == j_max))
		return ('C');
	else if (i == 0 || i == i_max || j == 0 || j == j_max)
		return ('B');
	return (' ');
}

void	rush02(int x, int y)
{
	int	i;
	int	j;
	int mem;

	if (x > 0 && y > 0)
	{
		i = 0;
		mem = y - 1;
		y = x - 1;
		x = mem;
		while (i <= x)
		{
			j = 0;
			while (j <= y)
			{
				ft_putchar(choice(i, j, x, y));
				j++;
			}
			ft_putchar('\n');
			i++;
		}
	}
}
