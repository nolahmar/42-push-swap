/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three_func.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolahmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 10:18:21 by nolahmar          #+#    #+#             */
/*   Updated: 2023/05/04 10:18:36 by nolahmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		sort_three_sa_rra(t_list **a)
{
	int i;

	i = 2;
	sa(a, 0);
	rra(a, 0);
	write(1, "sa\n", 3);
	write(1, "rra\n", 4);
	return (i);
}

int		sort_three_sa_ra(t_list **a)
{
	int i;

	i = 2;
	sa(a, 0);
	ra(a, 0);
	write(1, "sa\n", 3);
	write(1, "ra\n", 3);
	return (i);
}

int		sort_three_sa_and_write(t_list **a)
{
	int i;

	i = 1;
	sa(a, 0);
	write(1, "sa\n", 3);
	return (i);
}

int		sort_three_ra_and_write(t_list **a)
{
	int i;

	i = 1;
	ra(a, 0);
	write(1, "ra\n", 3);
	return (i);
}

int		sort_three_rra_and_write(t_list **a)
{
	int i;

	i = 1;
	rra(a, 0);
	write(1, "rra\n", 4);
	return (i);
}
