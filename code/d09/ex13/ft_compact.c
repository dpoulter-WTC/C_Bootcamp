int		ft_compact(char **tab, int length)
{
	int		i;
	int		y;

	i = 0;
	while (tab[i])
	{
		y = 0;
		while (tab[i][y])
		{
			if (tab[i][y] == '0')
				length = length - 1;
			y++;
		}
		i++;
	}
return (length);
}
