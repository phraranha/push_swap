/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paranha <paranha@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 15:47:15 by paranha           #+#    #+#             */
/*   Updated: 2024/05/26 15:47:16 by paranha          ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	sa(t_vector *a)
{
	long	first;
	long	second;

	if (a->size < 2)
		return ;
	first = a->values[0];
	second = a->values[1];
	ft_vector_pop_front(a);
	ft_vector_pop_front(a);
	ft_vector_push_front(a, first);
	ft_vector_push_front(a, second);
	write(1, "sa\n", 3);
}

void	sb(t_vector *b)
{
	long	first;
	long	second;

	if (b->size < 2)
		return ;
	first = b->values[0];
	second = b->values[1];
	ft_vector_pop_front(b);
	ft_vector_pop_front(b);
	ft_vector_push_front(b, first);
	ft_vector_push_front(b, second);
	write(1, "sb\n", 3);
}

static void	sa_s(t_vector *a)
{
	long	first;
	long	second;

	if (a->size < 2)
		return ;
	first = a->values[0];
	second = a->values[1];
	ft_vector_pop_front(a);
	ft_vector_pop_front(a);
	ft_vector_push_front(a, first);
	ft_vector_push_front(a, second);
}

static void	sb_s(t_vector *b)
{
	long	first;
	long	second;

	if (b->size < 2)
		return ;
	first = b->values[0];
	second = b->values[1];
	ft_vector_pop_front(b);
	ft_vector_pop_front(b);
	ft_vector_push_front(b, first);
	ft_vector_push_front(b, second);
}

void	ss(t_vector *a, t_vector *b)
{
	sa_s(a);
	sb_s(b);
	write(1, "ss\n", 3);
}
