/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paranha <paranha@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 15:47:02 by paranha           #+#    #+#             */
/*   Updated: 2024/05/27 16:15:38 by paranha          ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

long	biggest_finder(const t_vector *a)
{
	unsigned long	i;
	long			biggest;

	if (ft_vector_empty(a))
		return (0);
	i = 0;
	biggest = ft_vector_at(a, i);
	while (i < ft_vector_size(a))
	{
		if (ft_vector_at(a, i) > biggest)
			biggest = ft_vector_at(a, i);
		i++;
	}
	return (biggest);
}

long	smallest_finder(const t_vector *a)
{
	unsigned long	i;
	long			smallest;

	if (ft_vector_empty(a))
		return (0);
	i = 0;
	smallest = ft_vector_at(a, i);
	while (i < ft_vector_size(a))
	{
		if (ft_vector_at(a, i) < smallest)
			smallest = ft_vector_at(a, i);
		i++;
	}
	return (smallest);
}

void	sort_three(t_vector *a)
{
	long	t;
	long	m;
	long	b;

	t = a->values[0];
	m = a->values[1];
	b = a->values[2];
	if (t > m && m < b && b > t)
		sort_three_sa(a);
	if (t > m && m > b && b < t)
		sort_three_sa_and_rra(a);
	if (t > m && m < b && b < t)
		sort_three_ra(a);
	if (t < m && m > b && b > t)
		sort_three_sa_and_ra(a);
	if (t < m && m > b && b < t)
		sort_three_rra(a);
	if (first_confirmed_ordered(a) == 0)
		return ;
}

void	sort5_rotate(t_vector *a, long min)
{
	long	i;
	long	size;

	i = 0;
	size = ft_vector_size(a);
	while (i < size)
	{
		if (ft_vector_at(a, i) == min)
			break ;
		i++;
	}
	if (i == 0)
		return ;
	if (i < (size / 2))
		ra(a);
	else
		rra(a);
}

void	sort_five(t_vector *a, t_vector *b)
{
	long	min;
	long	size;

	size = ft_vector_size(a);
	if (size == 3)
	{
		sort_three(a);
		return ;
	}
	while (ft_vector_size(a) > 3)
	{
		min = smallest_finder(a);
		sort5_rotate(a, min);
		if (ft_vector_at(a, 0) == min)
			pb(a, b);
	}
	sort_three(a);
	while (!ft_vector_empty(b))
		pa(a, b);
}
