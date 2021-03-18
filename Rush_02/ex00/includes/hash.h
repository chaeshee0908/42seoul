/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hash.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schae <schae@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 23:17:24 by schae             #+#    #+#             */
/*   Updated: 2021/03/14 23:17:28 by schae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HASH_H
# define HASH_H

# define HASH_DIGIT 38
# define DIGIT_SIZE 3
# define DIGIT_HUNDRED 3
# define DIGIT_TEN 2
# define PRINT_DIVIDE_PIVOT '2'
# define ZERO_STRING "000"

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct		s_node
{
	char			*key;
	char			*value;
	struct s_node	*next;
}					t_node;

t_node			*g_hash_table[HASH_DIGIT];

int					valid_argv(char *argv);

char				*ft_trim_malloc(char *str);

char				*valid_argc(int argc, char *argv[], char **print_number);

void				add_node(char *my_dict, int n_cnt, t_node *top);

void				add(t_node *n, int digit);

t_node				*new_node(t_node **top);

void				init_hash_table(void);

int					ft_strcmp(char *s1, char *s2);

void				add(t_node *n, int digit);

int					find_digit(char *c);

void				free_node(t_node *r, t_node **top);

int					key_search(char *c);

int					digit_search(int digit);

void				print_argv_in_english(char *argv);

int					print_able_without_minus(char c);

int					init_pool(int n_cnt, t_node **pool, t_node **top);

char				*file_open(char *dict);

int					set_key(char **key, char *my_dict);

int					white_space(char c);

int					print_able(char c);

char				*ft_trim(char *str);

int					set_value(char **key, char *my_dict);

t_node				*make_node(char *my_dict, int *i, t_node **top);

int					validate_arr(char *str);

#endif
