/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_hooks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arezouk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 08:01:07 by arezouk           #+#    #+#             */
/*   Updated: 2019/01/28 14:54:19 by arezouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		fract(t_mlx *mlx)
{
	if (mlx->fract == 1)
		mandelbrot(mlx);
	else if (mlx->fract == 2)
		julia(mlx);
	else if (mlx->fract == 3)
		burningship(mlx);
	else if (mlx->fract == 4)
		tricorn(mlx);
	else if (mlx->fract == 5)
		mandelbrot_v3(mlx);
	else if (mlx->fract == 6)
		mandelbrot_v4(mlx);
	else if (mlx->fract == 7)
		julia_v3(mlx);
	else if (mlx->fract == 8)
		julia_v4(mlx);
	return (1);
}

int		mouse_move(int x, int y, t_mlx *mlx)
{
	if ((mlx->fract == 2 || mlx->fract == 7 || mlx->fract == 8) &&
						mlx->block == 0)
	{
		mlx->c_re = ((float)(x * 1.5 - WIN_W) / WIN_W);
		mlx->c_im = ((float)(y * 1.5 - WIN_H) / WIN_H);
		if (mlx->fract == 2)
			julia(mlx);
		else if (mlx->fract == 7)
			julia_v3(mlx);
		else if (mlx->fract == 8)
			julia_v4(mlx);
	}
	return (0);
}

int		mouse_hook(int mouse, int x, int y, t_mlx *mlx)
{
	if (mouse == 4)
	{
		zoom(x, y, 0.9, mlx);
		mlx->max += 1;
	}
	else if (mouse == 5)
	{
		zoom(x, y, 1.0 / 0.9, mlx);
		mlx->max -= 1;
	}
	fract(mlx);
	return (0);
}

int		el_se(int key, t_mlx *mlx)
{
	if (key == 8)
	{
		mlx->c++;
		if (mlx->c == 1)
			mlx->color = gay_pink(mlx);
		else if (mlx->c == 2)
			mlx->color = bluegrey(mlx);
		else if (mlx->c == 3)
			mlx->color = fireorange(mlx);
		else if (mlx->c == 4)
		{
			mlx->color = aqua_blue(mlx);
			mlx->c = 0;
		}
	}
	else if (key == 34)
		initialize(mlx);
	else if (key == 78)
		mlx->block = 1;
	else if (key == 69)
		mlx->block = 0;
	move(key, mlx);
	return (1);
}

int		key_hooks(int key, t_mlx *mlx)
{
	if (key == 53)
	{
		free(mlx);
		exit(0);
	}
	else if (key == 86)
		mandelbrot_v4(mlx);
	else if (key == 84)
		julia_v4(mlx);
	else if (key == 85)
		mandelbrot_v3(mlx);
	else if (key == 83)
		julia_v3(mlx);
	else if (key == 15)
		mlx->fract = 3;
	else if (key == 38)
		mlx->fract = 2;
	else if (key == 17)
		mlx->fract = 4;
	else if (key == 46)
		mlx->fract = 1;
	el_se(key, mlx);
	fract(mlx);
	return (0);
}
