/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abchan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 14:23:34 by abchan            #+#    #+#             */
/*   Updated: 2018/08/28 13:53:55 by abchan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
#include <stdio.h>

void	error_display()
{
	ft_putendl("Your choices are:\n\"Mandelbrot\" | \"Julia\" | \"Burningship\" | \"something1\" | \"something2\"\n");
}

int		check_name(char **argv)
{
	if ((ft_strcmp(argv[1], "Mandelbrot") == 0))
		return (1);
	if ((ft_strcmp(argv[1], "Julia") == 0))
		return (2);
	if ((ft_strcmp(argv[1], "Burningship") == 0))
		return (3);
	if ((ft_strcmp(argv[1], "something1") == 0))
		return (4);
	if ((ft_strcmp(argv[1], "something2") == 0))
		return (5);
	return (0);
}

int		main(int argc, char **argv)
{
	t_core	*mlxCore;
	int		fractalNumber;

	if (argc == 2 && (fractalNumber = check_name(argv)) != 0)
	{
		if (!(mlxCore = (t_core *)ft_memalloc(sizeof(t_core))))
			return (0);
		mlxCore->mlx = mlx_init(); //mlx initiation
		mlxCore->win = mlx_new_window(mlxCore->mlx, WNDW_WDTH, WNDW_HGHT, "fractal");
		//keyhook here
		//here we will send it to multithread function
		if ((mlxCore = main_init(mlxCore, fractalNumber)) != NULL) //image initialization
		{
			ft_putendl("Error: initialization");
			return (0);
		}
		mlx_loop(mlxCore->mlx);
	}
	else
		error_display();
	return (0);
}
