/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoulter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 11:38:58 by dpoulter          #+#    #+#             */
/*   Updated: 2018/02/23 11:39:01 by dpoulter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

typedef int ft_bool;
#define TRUE 1
#define OPEN 1
#define CLOSE 0
#define EXIT_SUCCESSS 0
typedef struct	s_door
{
	int	state;
}				t_door;
ft_bool	open_door(t_door *door);
ft_bool	close_door(t_door *door);
ft_bool	is_door_open(t_door *door);
ft_bool	is_door_close(t_door *door);
