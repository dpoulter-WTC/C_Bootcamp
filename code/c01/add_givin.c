#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str++ != '\0')
		ft_putchar(*str);
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
