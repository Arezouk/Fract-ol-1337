/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arezouk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 18:28:38 by arezouk           #+#    #+#             */
/*   Updated: 2019/01/28 18:28:42 by arezouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int					rgb(int r, int g, int b)
{
	unsigned char	color[4];

	color[0] = b;
	color[1] = g;
	color[2] = r;
	color[3] = 0;
	return (*((int *)color));
}

int					*gay_pink(t_mlx *mlx)
{
	mlx->tab[0] = rgb(238, 205, 163);
	mlx->tab[1] = rgb(238, 198, 162);
	mlx->tab[2] = rgb(238, 191, 162);
	mlx->tab[3] = rgb(238, 184, 162);
	mlx->tab[4] = rgb(238, 178, 162);
	mlx->tab[5] = rgb(238, 171, 161);
	mlx->tab[6] = rgb(238, 164, 161);
	mlx->tab[7] = rgb(238, 158, 161);
	mlx->tab[8] = rgb(238, 151, 161);
	mlx->tab[9] = rgb(238, 144, 160);
	mlx->tab[10] = rgb(238, 138, 160);
	mlx->tab[11] = rgb(238, 131, 160);
	mlx->tab[12] = rgb(238, 124, 160);
	mlx->tab[13] = rgb(238, 138, 160);
	mlx->tab[14] = rgb(238, 144, 160);
	mlx->tab[15] = rgb(238, 151, 161);
	mlx->tab[16] = rgb(238, 158, 161);
	mlx->tab[17] = rgb(238, 164, 161);
	mlx->tab[18] = rgb(238, 171, 161);
	mlx->tab[19] = rgb(238, 178, 162);
	mlx->tab[20] = rgb(238, 184, 162);
	mlx->tab[21] = rgb(238, 191, 162);
	mlx->tab[22] = rgb(238, 198, 162);
	mlx->tab[23] = rgb(238, 205, 163);
	return (mlx->tab);
}

int					*bluegrey(t_mlx *mlx)
{
	mlx->tab[0] = rgb(25, 84, 123);
	mlx->tab[1] = rgb(39, 92, 125);
	mlx->tab[2] = rgb(53, 100, 127);
	mlx->tab[3] = rgb(68, 108, 129);
	mlx->tab[4] = rgb(82, 117, 131);
	mlx->tab[5] = rgb(96, 125, 133);
	mlx->tab[6] = rgb(111, 133, 135);
	mlx->tab[7] = rgb(125, 141, 137);
	mlx->tab[8] = rgb(140, 150, 139);
	mlx->tab[9] = rgb(154, 158, 141);
	mlx->tab[10] = rgb(168, 166, 143);
	mlx->tab[11] = rgb(183, 174, 145);
	mlx->tab[12] = rgb(183, 174, 145);
	mlx->tab[13] = rgb(168, 166, 143);
	mlx->tab[14] = rgb(154, 158, 141);
	mlx->tab[15] = rgb(140, 150, 139);
	mlx->tab[16] = rgb(125, 141, 137);
	mlx->tab[17] = rgb(111, 133, 135);
	mlx->tab[18] = rgb(96, 125, 133);
	mlx->tab[19] = rgb(82, 117, 131);
	mlx->tab[20] = rgb(68, 108, 129);
	mlx->tab[21] = rgb(53, 100, 127);
	mlx->tab[22] = rgb(39, 92, 125);
	mlx->tab[23] = rgb(25, 84, 123);
	return (mlx->tab);
}

int					*fireorange(t_mlx *mlx)
{
	mlx->tab[0] = rgb(250, 116, 43);
	mlx->tab[1] = rgb(250, 123, 48);
	mlx->tab[2] = rgb(250, 130, 54);
	mlx->tab[3] = rgb(250, 137, 59);
	mlx->tab[4] = rgb(251, 145, 65);
	mlx->tab[5] = rgb(251, 152, 71);
	mlx->tab[6] = rgb(251, 159, 76);
	mlx->tab[7] = rgb(252, 167, 82);
	mlx->tab[8] = rgb(252, 174, 88);
	mlx->tab[9] = rgb(252, 181, 93);
	mlx->tab[10] = rgb(253, 189, 99);
	mlx->tab[11] = rgb(253, 196, 104);
	mlx->tab[12] = rgb(253, 196, 104);
	mlx->tab[13] = rgb(253, 189, 99);
	mlx->tab[14] = rgb(252, 181, 93);
	mlx->tab[15] = rgb(252, 174, 88);
	mlx->tab[16] = rgb(252, 167, 82);
	mlx->tab[17] = rgb(251, 159, 76);
	mlx->tab[18] = rgb(251, 152, 71);
	mlx->tab[19] = rgb(251, 145, 65);
	mlx->tab[20] = rgb(250, 137, 59);
	mlx->tab[21] = rgb(250, 130, 54);
	mlx->tab[22] = rgb(250, 123, 48);
	mlx->tab[23] = rgb(250, 116, 43);
	return (mlx->tab);
}

int					*aqua_blue(t_mlx *mlx)
{
	mlx->tab[0] = rgb(233, 89, 81);
	mlx->tab[1] = rgb(93, 181, 199);
	mlx->tab[2] = rgb(247, 216, 120);
	mlx->tab[3] = rgb(230, 230, 234);
	mlx->tab[4] = rgb(244, 244, 248);
	mlx->tab[5] = rgb(244, 244, 248);
	mlx->tab[6] = rgb(230, 230, 234);
	mlx->tab[7] = rgb(247, 216, 120);
	mlx->tab[8] = rgb(93, 181, 199);
	mlx->tab[9] = rgb(233, 89, 81);
	mlx->tab[10] = rgb(233, 89, 81);
	mlx->tab[11] = rgb(93, 181, 199);
	mlx->tab[12] = rgb(247, 216, 120);
	mlx->tab[13] = rgb(230, 230, 234);
	mlx->tab[14] = rgb(244, 244, 248);
	mlx->tab[15] = rgb(244, 244, 248);
	mlx->tab[16] = rgb(230, 230, 234);
	mlx->tab[17] = rgb(247, 216, 120);
	mlx->tab[18] = rgb(93, 181, 199);
	mlx->tab[19] = rgb(233, 89, 81);
	mlx->tab[20] = rgb(233, 89, 81);
	mlx->tab[21] = rgb(93, 181, 199);
	mlx->tab[22] = rgb(247, 216, 120);
	mlx->tab[23] = rgb(230, 230, 234);
	return (mlx->tab);
}
