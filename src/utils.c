/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paranha <paranha@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 15:48:12 by paranha           #+#    #+#             */
/*   Updated: 2024/11/20 17:36:22 by paranha          ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	free_and_exit(t_vector *a, t_vector *b)
{
	write(1, "Error\n", 6);
	ft_vector_free(a);
	ft_vector_free(b);
	exit(0);
}

long	first_confirmed_ordered(t_vector *a)
{
	unsigned long	i;

	i = 0;
	while (i < a->size - 1)
	{
			if (a->values[i] > a->values[i + 1])
				return (1);
		i++;
	}
	return (0);
}

long	get_max_bits(const t_vector *a)
{
	long	max;
	long	max_bits;

	max = biggest_finder(a);
	max_bits = 0;
	while ((max >> max_bits) != 0)
	{
		max_bits++;
	}
	return (max_bits);
}

void	vector_copy(t_vector *dest, const t_vector *src)
{
	unsigned long	i;

	i = 0;
	while (i < ft_vector_size(src))
	{
		ft_vector_push_back(dest, ft_vector_at(src, i));
		i++;
	}
}

void	sort_vector(t_vector *vec)
{
	unsigned long	i;
	unsigned long	j;
	long			temp;

	i = 0;
	while (i < ft_vector_size(vec) - 1)
	{
		j = 0;
		while (j < ft_vector_size(vec) - i - 1)
		{
			if (ft_vector_at(vec, j) > ft_vector_at(vec, j + 1))
			{
				temp = vec->values[j];
				vec->values[j] = vec->values[j + 1];
				vec->values[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}
