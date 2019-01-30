/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arezouk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 14:49:25 by arezouk           #+#    #+#             */
/*   Updated: 2019/01/28 18:29:04 by arezouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		move(int key, t_mlx *mlx)
{
	if (key == 125)
		mlx->offy += mlx->ydelta * 0.09;
	else if (key == 126)
		mlx->offy -= mlx->ydelta * 0.09;
	else if (key == 124)
		mlx->offx += mlx->xdelta * 0.09;
	else if (key == 123)
		mlx->offx -= mlx->xdelta * 0.09;
	else if (key == 35)
		mlx->max += 5;
	else if (key == 31)
		mlx->max -= 5;
	return (0);
}
