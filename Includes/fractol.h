/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arezouk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 06:10:47 by arezouk           #+#    #+#             */
/*   Updated: 2019/01/28 14:54:35 by arezouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H
# include <mlx.h>
# include <string.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <math.h>

# define WIN_W 650
# define WIN_H 650

typedef struct	s_mlx
{
	void	*mlx_ptr;
	void	*mlx_win;
	void	*mlx_img;
	int		*mlx_data;
	int		bpp;
	int		size_l;
	int		endian;
	int		max;
	int		*tab;
	int		row;
	int		col;
	int		fract;
	int		*color;
	int		c;
	int		i;
	int		block;
	double	xdelta;
	double	ydelta;
	double	zoom;
	double	offx;
	double	offy;
	double	c_re;
	double	c_im;
	double	x;
	double	y;
	double	x_new;
	double	minre;
	double	maxre;
	double	minim;
	double	maxim;
}				t_mlx;

void			init_c(t_mlx *mlx);
void			init(t_mlx *mlx);
void			tricorn(t_mlx *mlx);
void			draw_shuriken(t_mlx *mlx);
void			initialize(t_mlx *mlx);
void			mandelbrot(t_mlx *mlx);
void			draw_mandel(t_mlx *mlx);
void			init_j(t_mlx *mlx);
void			julia(t_mlx *mlx);
void			draw_julia(t_mlx *mlx);
void			burningship(t_mlx *mlx);
void			draw_burningship(t_mlx *mlx);
void			error();
void			init_win(t_mlx *mlx, char *argv[]);
void			get_fract(char *argv[], t_mlx *mlx);
void			zoom(int x, int y, double z, t_mlx *mlx);
double			calculate(double start, double end, double zoom);
int				mouse_move(int x, int y, t_mlx *mlx);
int				mouse_hook(int mouse, int x, int y, t_mlx *mlx);
int				key_hooks(int key, t_mlx *mlx);
void			image(t_mlx *mlx);
int				rgb(int r, int g, int b);
int				ft_strcmp(const char *s1, const char *s2);
void			ft_putstr(char const *s);
int				*gay_pink(t_mlx *mlx);
int				*bluegrey(t_mlx *mlx);
int				*fireorange(t_mlx *mlx);
int				*aqua_blue(t_mlx *mlx);
int				ft_tabfree(int **tab);
void			mandelbrot_v3(t_mlx *mlx);
void			mandelbrot_v4(t_mlx *mlx);
void			julia_v3(t_mlx *mlx);
void			julia_v4(t_mlx *mlx);
int				move(int key, t_mlx *mlx);
#endif
