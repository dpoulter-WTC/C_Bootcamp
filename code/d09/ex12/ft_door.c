#include <stdlib.h>
#include "ft_door.h"

void	ft_putstr(char *str)
{
	int i = 0;
	while (str[i])
		write(1, str, i);
}

ft_bool	close_door(t_door *door)
{
	ft_putstr("Door closing...\n");
	state = CLOSE;
	return (TRUE);
}

ft_bool	open_door(t_door *door)
{
	ft_putstr("Door opening...\n");
	state = OPEN;
	return (TRUE);
}

void	is_door_open(t_door door)
{
	ft_putstr("Door is open ?\n");
	return (door->state = OPEN);
}

ft_bool	is_door_close(t_door* door)
{
	ft_putstr("Door is closed ?\n") ;
	return (door->state = CLOSE);
}
