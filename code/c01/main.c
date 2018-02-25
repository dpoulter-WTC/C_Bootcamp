int		main(int argc, char **argv)
{
	if (check_input(argc, argv) == 1)
	{
		print(argc, argv);
	else
	{
		ft_putstr("Error");
		ft_putchar("\n");
	}
	return (0);
}
