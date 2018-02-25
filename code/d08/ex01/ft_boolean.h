#ifndef FT_BOOLEAN_H
# define	FT_BOOLEAN_H

# include <unistd.h>

typedef	int	t_bool;

# define	TRUE	1
# define	FALSE	0
# define	EVEN(x)	((x % 2) == 0 ? TRUE : FALSE)
# define	SUCCESS	0
# define	EVEN_MSG	"I have an even number of arguments.\n"
# define	ODD_MSG		"I have an odd number of arguments.\n"

void		ft_putstr(char *str);
t_bool		ft_is_even(int nbr);

#endif
