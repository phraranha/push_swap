/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paranha <paranha@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 16:08:06 by paranha           #+#    #+#             */
/*   Updated: 2024/05/26 16:46:18 by paranha          ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libs/libft/libft.h"
# include <stdbool.h>
# include <stddef.h>
# include <stdlib.h>

# define FT_VECTOR_INITIAL_CAPACITY 16

typedef struct s_vector
{
	long			*values;
	unsigned long	size;
	unsigned long	capacity;
}				t_vector;

bool			ft_vector_resize(t_vector *vector, unsigned long new_capacity);
t_vector		*ft_vector_create(void);
void			ft_vector_free(t_vector *vector);
void			ft_vector_push_back(t_vector *vector, long value);
void			ft_vector_push_front(t_vector *vector, long value);
void			ft_vector_pop_back(t_vector *vector);
void			ft_vector_pop_front(t_vector *vector);
unsigned long	ft_vector_insert(t_vector *vector, unsigned long position,
					long value);
void			ft_vector_erase(t_vector *vector, unsigned long position);
long			ft_vector_at(const t_vector *vector, unsigned long index);
bool			ft_vector_empty(const t_vector *vector);
unsigned long	ft_vector_size(const t_vector *vector);
unsigned long	ft_vector_capacity(const t_vector *vector);
void			ft_vector_reserve(t_vector *vector, unsigned long new_capacity);
void			sa(t_vector *a);
void			sb(t_vector *b);
void			ss(t_vector *a, t_vector *b);
void			pa(t_vector *a, t_vector *b);
void			pb(t_vector *a, t_vector *b);
void			ra(t_vector *a);
void			rb(t_vector *b);
void			rr(t_vector *a, t_vector *b);
void			rra(t_vector *a);
void			rrb(t_vector *b);
void			rrr(t_vector *a, t_vector *b);
long			first_confirmed_ordered(t_vector *values);
void			sort_three(t_vector *a);
long			smallest_finder(const t_vector *b);
long			biggest_finder(const t_vector *a);
void			sort_five(t_vector *a, t_vector *b);
void			ft_check_double(t_vector *data, t_vector *b);
int				arg_is_number(char *av);
void			parse_args(int argc, char *argv[], t_vector *a, t_vector *b);
void			big_sort(t_vector *a, t_vector *b);
void			free_and_exit(t_vector *a, t_vector *b);
void			sort_three_sa_and_rra(t_vector *a);
void			sort_three_sa_and_ra(t_vector *a);
void			sort_three_sa(t_vector *a);
void			sort_three_ra(t_vector *a);
void			sort_three_rra(t_vector *a);
void			vector_copy(t_vector *dest, const t_vector *src);
void			sort_vector(t_vector *vec);
long			get_max_bits(const t_vector *a);

#endif
