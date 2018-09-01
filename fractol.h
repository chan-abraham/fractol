/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abchan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 15:25:55 by abchan            #+#    #+#             */
/*   Updated: 2018/08/28 13:53:57 by abchan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H
# define WNDW_HGHT 500
# define WNDW-WDTH 500
# define THREAD 4
# include "libft/libft.h"
# include "minilibx_macos/mlx.h"
# include <math.h>

typedef struct	s_img
{
	void		*ptr;
	char		*data_addr;
	int			bpp;
	int			line_size;
	int			endian;
}				t_img;

typedef struct	s_core
{
	void		*mlx;
	void		*win;
	t_img		*img;
//	void		function_pointer();
}				t_core;

t_core	*main_init(int fractalNumber);

#endif
