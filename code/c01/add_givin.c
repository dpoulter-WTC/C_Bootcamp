#include "sudoku.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print(int argc, char **argv)
{
	int i;
	int j;

	while (i < 9)
	{
		while (j < 9)
		{
			ft_putchar(argv[i][j]);
			ft_putchar('\n');
			j++;
		}
		i++;
	}
}
