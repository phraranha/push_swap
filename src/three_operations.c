/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_operations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paranha <paranha@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 15:46:28 by paranha           #+#    #+#             */
/*   Updated: 2024/05/26 15:46:29 by paranha          ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	sort_three_sa_and_rra(t_vector *a)
{
	sa(a);
	rra(a);
}

void	sort_three_sa_and_ra(t_vector *a)
{
	sa(a);
	ra(a);
}

void	sort_three_sa(t_vector *a)
{
	sa(a);
}

void	sort_three_ra(t_vector *a)
{
	ra(a);
}

void	sort_three_rra(t_vector *a)
{
	rra(a);
}
