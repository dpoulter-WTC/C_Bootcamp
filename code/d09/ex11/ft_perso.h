/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoulter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 11:38:08 by dpoulter          #+#    #+#             */
/*   Updated: 2018/02/23 11:38:09 by dpoulter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#define SAVE_AUSTIN_POWERS "To change"

typedef struct s_perso
{
	char *name;
	float life;
	int age;
	char *profession;
}					t_perso;
