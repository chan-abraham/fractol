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

	if (!(img = (t_img *)ft_memalloc(sizeof(t_img)))
		return (NULL);
	if (!(img->ptr = mlx_new_image(mlxCore->mlx, WNDW_WDTH, WNDW_HGHT)))
		return (NULL);
	img->data_addr = mlx_get_data_addr(img->ptr, &img->bbp,
		&img->line_size, &img->endian);
	img->bpp /= 8;
	return (img);
}

t_core		*main_init(int fractalNumber)
{
	t_core	*mlxCore;

	if (!(mlxCore = (t_core *)ft_memalloc(sizeof(t_core))))
		return (NULL);
	if (!(mlxCore->img = init_img(mlxCore)))
	{
		ft_memdel((void **)&mlxCore);
		return (NULL);
	}
	mlxCore->fractalNumber = fractalNumber;
}
