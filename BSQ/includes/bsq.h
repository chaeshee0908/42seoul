/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinseonghee <jinseonghee@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 11:58:26 by jinseonghee       #+#    #+#             */
/*   Updated: 2021/03/18 08:23:12 by sejin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

# define BUF_SIZE 1000000001

typedef struct	s_map_info
{
	int		row;
	int		col;
	char	empty;
	char	obs;
	char	fill;
	int		nb_char;
}				t_map_info;

int				ft_check_fl(char *buf, int i, char c);
int				ft_is_printable(char c);

void			init_doublemap(int ***map, int nb_c);
void			init_map(int **map, int nb_c);
void			switch_init_map(int	**map0, int **map1);
void			ft_free_doublemap(int ***map);

char			*get_buf(char *path);
t_map_info		*get_map_info(char **buf);
int				ft_min_close(int **map, int i, int j);
void			ft_fill_map(char *buf, int *ij, t_map_info *info, int ***map);
void			ft_fill_res(int **res, int ***map, int *ij, t_map_info *info);

int				ft_atoi(char *str);
char			*ft_itoa(int nbr);
void			ft_fill_nbr(char **res, int nbr, int idx);
int				ft_is_number(char c);
int				ft_strlen(char *str);

void			print_map(char *buf, int *res, t_map_info *info);
int				print_global(char *buf);

char			*get_buf_std(void);
char			*get_buf_file(char *path);

void			ft_make_map(char *buf, t_map_info *info, int *ij, int **res);
void			init_res(int **res);

#endif
