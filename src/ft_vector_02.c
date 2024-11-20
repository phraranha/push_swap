/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_02.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paranha <paranha@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 15:46:19 by paranha           #+#    #+#             */
/*   Updated: 2024/05/27 16:06:48 by paranha          ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

long	ft_vector_at(const t_vector *vector, unsigned long index)
{
	if (vector == NULL)
		return (0);
	if (index >= vector->size)
		return (0);
	return ((long)(vector->values[index]));
}

bool	ft_vector_empty(const t_vector *vector)
{
	if (vector == NULL)
		return (true);
	return (vector->size == 0);
}

unsigned long	ft_vector_size(const t_vector *vector)
{
	if (vector == NULL)
		return (-1);
	return (vector->size);
}

unsigned long	ft_vector_capacity(const t_vector *vector)
{
	if (vector == NULL)
		return (0);
	return (vector->capacity);
}

void	ft_vector_reserve(t_vector *vector, unsigned long new_capacity)
{
	if (vector == NULL)
		return ;
	if (new_capacity > vector->capacity)
	{
		if (!ft_vector_resize(vector, new_capacity))
			return ;
	}
}
