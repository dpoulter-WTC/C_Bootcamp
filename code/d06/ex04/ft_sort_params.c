/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoulter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 18:27:19 by dpoulter          #+#    #+#             */
/*   Updated: 2018/02/20 19:42:31 by dpoulter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] < s2[i])
			return (-1);
		if (s1[i] > s2[i])
			return (1);
		i++;
	}
	return (0);
}

void	ft_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	int		arr[argc];

	j = 0;
	while (j++ < argc)
		arr[j] = j;
	j = 0;
	while (j < argc)
	{
		if (ft_strcmp(argv[j], argv[j+1]))
		{
			ft_swap(&arr[j], &arr[j+1]);
		}	
		j++;
	}
	j = 0;
	while (j < argc)
	{
		i = 0;
		while (argv[j][i])
		{
			ft_putchar(argv[j][i]);
			i++;
		}
		ft_putchar('\n');
	}

	return (0);
}
