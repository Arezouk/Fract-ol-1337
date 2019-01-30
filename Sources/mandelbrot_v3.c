/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mandelbrot_v4.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arezouk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/27 09:55:58 by arezouk           #+#    #+#             */
/*   Updated: 2019/01/28 14:21:26 by arezouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void		mandelbrot_v3(t_mlx *mlx)
{
	mlx->fract = 5;
	image(mlx);
	mlx->row = -1;
	while (++mlx->row < WIN_W)
	{
		mlx->col = -1;
		while (++mlx->col < WIN_H)
		{
			init_c(mlx);
			while (mlx->x * mlx->x + mlx->y * mlx->y < 4 && mlx->i < mlx->max)
			{
				mlx->x_new = mlx->x * mlx->x * mlx->x - 3 * mlx->x * mlx->y *
								mlx->y + mlx->c_re + mlx->offx;
				mlx->y = 3 * mlx->x * mlx->x * mlx->y - mlx->y * mlx->y *
								mlx->y + mlx->c_im + mlx->offy;
				mlx->x = mlx->x_new;
				mlx->i++;
			}
			if (mlx->i < mlx->max)
				mlx->mlx_data[mlx->col * WIN_W + mlx->row] =
					mlx->color[mlx->i % 24];
		}
	}
	mlx_put_image_to_window(mlx->mlx_ptr, mlx->mlx_win, mlx->mlx_img, 0, 0);
}
