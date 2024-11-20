/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paranha <paranha@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 15:46:47 by paranha           #+#    #+#             */
/*   Updated: 2024/05/26 15:46:48 by paranha          ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	assign_ranks(t_vector *a, t_vector *ranked)
{
	t_vector		*temp;
	unsigned long	i;
	long			num;
	unsigned long	rank;

	temp = ft_vector_create();
	vector_copy(temp, a);
	sort_vector(temp);
	i = 0;
	while (i < ft_vector_size(a))
	{
		num = ft_vector_at(a, i);
		rank = 0;
		while (ft_vector_at(temp, rank) != num)
		{
			rank++;
		}
		ft_vector_push_back(ranked, (int)rank);
		i++;
	}
	ft_vector_free(temp);
}

void	radix_sort(t_vector *a, t_vector *b)
{
	long	i;
	long	j;
	long	size;
	long	max_bits;

	i = 0;
	size = ft_vector_size(a);
	max_bits = get_max_bits(a);
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			if (((ft_vector_at(a, 0) >> i) & 1) == 1)
				ra(a);
			else
				pb(a, b);
			j++;
		}
		while (!ft_vector_empty(b))
			pa(a, b);
		i++;
	}
}

void	big_sort(t_vector *a, t_vector *b)
{
	t_vector	*ranked;

	ranked = ft_vector_create();
	assign_ranks(a, ranked);
	a = ranked;
	radix_sort(a, b);
	ft_vector_free(ranked);
}
