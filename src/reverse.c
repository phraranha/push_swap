/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paranha <paranha@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 15:47:32 by paranha           #+#    #+#             */
/*   Updated: 2024/05/26 15:47:33 by paranha          ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	rra(t_vector *a)
{
	long	last;

	if (a->size < 2)
		return ;
	last = a->values[a->size - 1];
	ft_vector_pop_back(a);
	ft_vector_push_front(a, last);
	write(1, "rra\n", 4);
}

void	rrb(t_vector *b)
{
	long	last;

	if (b->size < 2)
		return ;
	last = b->values[b->size - 1];
	ft_vector_pop_back(b);
	ft_vector_push_front(b, last);
	write(1, "rrb\n", 4);
}

void	rra_r(t_vector *a)
{
	long	last;

	if (a->size < 2)
		return ;
	last = a->values[a->size - 1];
	ft_vector_pop_back(a);
	ft_vector_push_front(a, last);
}

void	rrb_r(t_vector *b)
{
	long	last;

	if (b->size < 2)
		return ;
	last = b->values[b->size - 1];
	ft_vector_pop_back(b);
	ft_vector_push_front(b, last);
}

void	rrr(t_vector *a, t_vector *b)
{
	rra_r(a);
	rrb_r(b);
	write(1, "rrr\n", 4);
}
