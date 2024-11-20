/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paranha <paranha@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 15:45:36 by paranha           #+#    #+#             */
/*   Updated: 2024/05/26 17:13:08 by paranha          ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

int	is_sign(char c)
{
	return (c == '+' || c == '-');
}

int	arg_is_number(char *av)
{
	int	i;

	i = 0;
	if (av[i] == '\0')
		return (0);
	if (is_sign(av[i]) && av[i + 1] != '\0')
		i++;
	while (av[i] && is_digit(av[i]))
		i++;
	return (av[i] == '\0');
}

void	ft_check_double(t_vector *data, t_vector *b)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (j < ft_vector_size(data))
	{
		i = j + 1;
		while (i < ft_vector_size(data))
		{
			if (ft_vector_at(data, j) == ft_vector_at(data, i))
				free_and_exit(data, b);
			i++;
		}
		j++;
	}
}

void	parse_args(int argc, char *argv[], t_vector *a, t_vector *b)
{
	int		i;
	long	number;

	i = 1;
	while (i < argc)
	{
		if (!arg_is_number(argv[i]))
			free_and_exit(a, b);
		number = ft_atol(argv[i]);
		if (number < -2147483648 || number > 2147483647)
			free_and_exit(a, b);
		ft_vector_push_back(a, number);
		i++;
	}
	ft_check_double(a, b);
	if (first_confirmed_ordered(a) == 0)
	{
		ft_vector_free(a);
		ft_vector_free(b);
		exit(0);
	}
}
