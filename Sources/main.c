/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arezouk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 06:36:12 by arezouk           #+#    #+#             */
/*   Updated: 2019/01/28 14:42:56 by arezouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void		error(void)
{
	ft_putstr("Usage : ./fractol 	[mandelbrot]\n \
			[julia]\n \
			[burningship]\n \
			[tricorn]\n");
}

void		initialize(t_mlx *mlx)
{
	mlx->minre = (0 - WIN_W / 2.0) * 4.0 / WIN_W;
	mlx->maxre = (WIN_W - WIN_W / 2.0) * 4.0 / WIN_W;
	mlx->minim = (0 - WIN_H / 2.0) * 4.0 / WIN_W;
	mlx->maxim = (WIN_H - WIN_H / 2.0) * 4.0 / WIN_W;
	mlx->max = 50;
	mlx->offx = 0;
	mlx->offy = 0;
	mlx->c = 1;
}

void		ini_win(t_mlx *mlx, char *argv[])
{
	mlx->tab = (int *)malloc(sizeof(int) * 24);
	mlx->mlx_ptr = mlx_init();
	mlx->mlx_win = mlx_new_window(mlx->mlx_ptr, WIN_W, WIN_H, argv[1]);
	mlx->mlx_img = mlx_new_image(mlx->mlx_ptr, WIN_W, WIN_H);
	mlx->mlx_data = (int *)mlx_get_data_addr(mlx->mlx_img, &(mlx->bpp),
			&(mlx->size_l), &(mlx->endian));
}

void		get_fract(char *argv[], t_mlx *mlx)
{
	if (ft_strcmp("mandelbrot", argv[1]) == 0)
		draw_mandel(mlx);
	else if (ft_strcmp("julia", argv[1]) == 0)
		draw_julia(mlx);
	else if (ft_strcmp("burningship", argv[1]) == 0)
		draw_burningship(mlx);
	else if (ft_strcmp("tricorn", argv[1]) == 0)
		draw_shuriken(mlx);
}

int			main(int argc, char *argv[])
{
	t_mlx	*mlx;

	mlx = (t_mlx *)malloc(sizeof(t_mlx));
	if (argc == 2)
	{
		if (ft_strcmp("julia", argv[1]) != 0 &&
	ft_strcmp("mandelbrot", argv[1]) != 0 &&
	ft_strcmp("burningship", argv[1]) != 0 && ft_strcmp("tree", argv[1]) != 0
	&& ft_strcmp("tricorn", argv[1]) != 0)
		{
			error();
			return (0);
		}
		ini_win(mlx, argv);
		initialize(mlx);
		get_fract(argv, mlx);
		mlx_hook(mlx->mlx_win, 2, 1, key_hooks, mlx);
		mlx_mouse_hook(mlx->mlx_win, mouse_hook, mlx);
		mlx_hook(mlx->mlx_win, 6, 1, mouse_move, mlx);
		mlx_put_image_to_window(mlx->mlx_ptr, mlx->mlx_win, mlx->mlx_img, 0, 0);
		mlx_loop(mlx->mlx_ptr);
	}
	else
		error();
	return (0);
}
