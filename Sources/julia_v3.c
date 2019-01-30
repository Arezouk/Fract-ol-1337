/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julia_v3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arezouk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/27 10:42:11 by arezouk           #+#    #+#             */
/*   Updated: 2019/01/28 14:39:33 by arezouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void		julia_v3(t_mlx *mlx)
{
	mlx->fract = 7;
	image(mlx);
	mlx->row = -1;
	while (++mlx->row < WIN_W)
	{
		mlx->col = -1;
		while (++mlx->col < WIN_H)
		{
			init(mlx);
			while (mlx->x * mlx->x + mlx->y * mlx->y <= 4 && mlx->i < mlx->max)
			{
				mlx->x_new = mlx->x * mlx->x * mlx->x - 3 * mlx->x * mlx->y *
					mlx->y + mlx->c_re;
				mlx->y = 3 * mlx->x * mlx->x * mlx->y - mlx->y * mlx->y *
					mlx->y + mlx->c_im;
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
