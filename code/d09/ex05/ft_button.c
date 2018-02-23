int	ft_button(int i, int j, int k)
{
	if ((i < j && i > k) || (i > j && i < k))
		return (i);
	else if ((j < i && j > k) || (j > i && j < k))
		return (j);
	else
		return (k);
}
