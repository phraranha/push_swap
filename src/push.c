/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paranha <paranha@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 15:47:19 by paranha           #+#    #+#             */
/*   Updated: 2024/05/26 15:47:20 by paranha          ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	pa(t_vector *a, t_vector *b)
{
	long	first;

	if (ft_vector_empty(b))
		return ;
	first = b->values[0];
	ft_vector_push_front(a, first);
	ft_vector_pop_front(b);
	write(1, "pa\n", 3);
}

void	pb(t_vector *a, t_vector *b)
{
	long	first;

	if (ft_vector_empty(a))
		return ;
	first = a->values[0];
	ft_vector_push_front(b, first);
	ft_vector_pop_front(a);
	write(1, "pb\n", 3);
}
