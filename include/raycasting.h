/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raycasting.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:48:44 by ziloughm          #+#    #+#             */
/*   Updated: 2022/12/22 19:00:35 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef RAYCASTING_H
# define RAYCASTING_H
# define NORTH 4.71
# define SOUTH 1.57
# define WEST PI
# define EAST 0

t_raycast	*init_raycat(t_data *data);
float		ft_calc_distance(t_data *data, t_point point);
void		ft_ray_cast(t_data *data, float ray_angl, int i);
void		cast_allrays(t_data *data);
void		start_raycast(t_data *data);
int			ft_ray_facing(float ray_ang, char *face);
int			ft_end_win(t_data *data, float x, float y);
int			ft_wall_grid(t_data *data, t_info in);

#	endif