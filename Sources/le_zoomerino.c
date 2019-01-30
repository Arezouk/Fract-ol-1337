/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   le_zoomerino.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arezouk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 08:06:54 by arezouk           #+#    #+#             */
/*   Updated: 2019/01/28 14:07:36 by arezouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

double		calculate(double start, double end, double zoom)
{
	return (start + ((end - start) * zoom));
}

void		zoom(int x, int y, double z, t_mlx *mlx)
{
	double	delta_x;
	double	delta_y;

	mlx->xdelta = mlx->maxre - mlx->minre;
	mlx->ydelta = mlx->maxim - mlx->minim;
	delta_x = mlx->minre + ((double)x * mlx->xdelta / WIN_W);
	delta_y = mlx->minim + ((double)y * mlx->ydelta / WIN_H);
	mlx->minre = calculate(delta_x, mlx->minre, z);
	mlx->maxre = calculate(delta_x, mlx->maxre, z);
	mlx->minim = calculate(delta_y, mlx->minim, z);
	mlx->maxim = calculate(delta_y, mlx->maxim, z);
}
