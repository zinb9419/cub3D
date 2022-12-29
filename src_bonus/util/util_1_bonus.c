/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util_1_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 22:38:41 by ziloughm          #+#    #+#             */
/*   Updated: 2022/12/27 18:02:52 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include_bonus/cub3D_bonus.h"

void	print_ray(t_ray ray)
{
	printf("distance %f hitX %f hitY %f angl %f\n", ray.distance, ray.wallhit_x, \
	ray.wallhit_y, ray.ray_angl);
}

void	print_rays(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->raycat->num_rays)
	{
		print_ray(data->raycat->rays[i]);
		i++;
	}
}

int	ft_destroy_window(t_data *data)
{
	mlx_destroy_window(data->gm->mlx, data->mlx_win);
	exit(0);
}
