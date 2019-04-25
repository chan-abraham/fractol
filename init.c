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

t_img		*init_img(t_core *mlxCore)
{
	t_img	*img;
write(1, "2", 1);
	if (!(img = (t_img *)ft_memalloc(sizeof(t_img))))
		return (0);
write(1, "3", 1);
	if (!(img->ptr = mlx_new_image(mlxCore->mlx, WNDW_WDTH, WNDW_HGHT)))
		return (0);
write(1, "4", 1);
	img->data_addr = mlx_get_data_addr(img->ptr, &img->bpp,
		&img->line_size, &img->endian);
	img->bpp /= 8;
	return (img);
}

t_core		*main_init(t_core *mlxCore, int fractalNumber)
{
	if (!(mlxCore->img = init_img(mlxCore)))
	{
		ft_memdel((void **)&mlxCore);
		return (NULL);
	}
	write(1, "a",1);
	mlxCore->fractalNumber = fractalNumber;
	return (mlxCore);
}
