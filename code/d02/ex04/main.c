/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoulter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 13:09:05 by dpoulter          #+#    #+#             */
/*   Updated: 2018/02/15 14:00:40 by dpoulter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_print_comb.c"

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int        main()
{
    ft_print_comb();
    return(0);
}
		
