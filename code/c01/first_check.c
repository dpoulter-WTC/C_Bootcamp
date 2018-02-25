void	ft_add(**sudoku, pos)
{
	int x;
	int y;
	int c;
	int nbr;

	x = pos / 9;
	y = pos % 9;
	c = 0;
	nbr = 1;
	while (nbr < 10)
	{
		if (check_line(sudoku, nbr, x) + check_column(sudoku, nbr, y) == 2)
		{
			if (check_block(sudoku, x, y, nbr))
				c++;
		}
		nbr++;
	}
	if (c == 1)
		sudoku[x][y] = nbr;
}
