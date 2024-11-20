/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paranha <paranha@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 15:47:28 by paranha           #+#    #+#             */
/*   Updated: 2024/05/26 15:47:28 by paranha          ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ra(t_vector *a)
{
	long	first;

	if (a->size < 2)
		return ;
	first = a->values[0];
	ft_vector_pop_front(a);
	ft_vector_push_back(a, first);
	write(1, "ra\n", 3);
}

void	rb(t_vector *b)
{
	long	first;

	if (b->size < 2)
		return ;
	first = b->values[0];
	ft_vector_pop_front(b);
	ft_vector_push_back(b, first);
	write(1, "rb\n", 3);
}

void	ra_r(t_vector *a)
{
	long	first;

	if (a->size < 2)
		return ;
	first = a->values[0];
	ft_vector_pop_front(a);
	ft_vector_push_back(a, first);
}

void	rb_r(t_vector *b)
{
	long	first;

	if (b->size < 2)
		return ;
	first = b->values[0];
	ft_vector_pop_front(b);
	ft_vector_push_back(b, first);
}

void	rr(t_vector *a, t_vector *b)
{
	ra_r(a);
	rb_r(b);
	write(1, "rr\n", 3);
}
