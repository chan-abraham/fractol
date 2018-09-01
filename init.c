/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abchan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 11:31:06 by abchan            #+#    #+#             */
/*   Updated: 2018/08/28 11:51:02 by abchan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

t_core		*main_init(int fractalNumber)
{
	t_core *mlxCore;

	if (!(mlxCore = (t_core *)ft_memalloc(sizeof(t_core))))
		return (NULL);

}
