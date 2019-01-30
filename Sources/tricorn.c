/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tricorn.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arezouk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 07:59:12 by arezouk           #+#    #+#             */
/*   Updated: 2019/01/28 14:24:42 by arezouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void		tricorn(t_mlx *mlx)
{
	image(mlx);
	mlx->row = -1;
	while (++mlx->row < WIN_W)
	{
		mlx->col = -1;
		while (++mlx->col < WIN_H)
		{
			init_c(mlx);
			while (mlx->x * mlx->x + mlx->y * mlx->y <= 4 && mlx->i < mlx->max)
			{
				mlx->x_new = mlx->x * mlx->x - mlx->y * mlx->y +
														mlx->c_re + mlx->offx;
				mlx->y = -2 * mlx->x * mlx->y + mlx->c_im + mlx->offy;
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

void		draw_shuriken(t_mlx *mlx)
{
	mlx->color = gay_pink(mlx);
	init_c(mlx);
	mlx->fract = 4;
	mlx->mlx_img = mlx_new_image(mlx->mlx_ptr, WIN_W, WIN_H);
	mlx->mlx_data = (int *)mlx_get_data_addr(mlx->mlx_img, &(mlx->bpp),
			&(mlx->size_l), &(mlx->endian));
	tricorn(mlx);
}
