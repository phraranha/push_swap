/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paranha <paranha@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 15:47:45 by paranha           #+#    #+#             */
/*   Updated: 2024/05/26 18:24:15 by paranha          ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	main(int argc, char *argv[])
{
	t_vector	*a;
	t_vector	*b;

	if (argc < 2)
		return (0);
	a = ft_vector_create();
	b = ft_vector_create();
	if (!a || !b)
		return (1);
	parse_args(argc, argv, a, b);
	if (argc == 3)
	{
		if (a->values[0] > a->values[1])
			sa(a);
	}
	else if (argc >= 4 && argc < 7)
		sort_five(a, b);
	else
		big_sort(a, b);
	ft_vector_free(a);
	ft_vector_free(b);
	return (0);
}
