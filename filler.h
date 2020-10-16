/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Melissa <Melissa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 12:33:23 by malasalm          #+#    #+#             */
/*   Updated: 2020/10/16 14:51:45 by Melissa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H
# include "libft/libft.h"
# include <fcntl.h>

typedef struct	s_filler
{
	char	**map;
	int		**heatmap;
	int		map_y;
	int		map_x;
	int		m;
	char	**piece;
	int		piece_y;
	int		piece_x;
	int		p;
	int		y_offset;
	int		x_offset;
	int		npiece_y;
	int		npiece_x;
	int		temp_y;
	int		temp_x;
	int		y_range;
	int		x_range;
	int		coord_y;
	int		coord_x;
	int		sum;
	int		extra;
}				t_filler;

t_filler		*initialize_struct(void);
void			re_initialize(t_filler *data);
int				get_data(t_filler *data, char *line, int p);
int				construct_map(t_filler *map, int p);
void			prep_piece(t_filler *map);
void			place_piece(t_filler *data);
void			free_map(t_filler *data);
void			free_piece(t_filler *data);
void			free_heatmap(t_filler *data);

#endif
