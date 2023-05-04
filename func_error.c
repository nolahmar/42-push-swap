/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_error.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolahmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 10:18:57 by nolahmar          #+#    #+#             */
/*   Updated: 2023/05/04 10:19:15 by nolahmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error_lst(t_list *p, int k)
{
	t_list	*s;

	if (k == 1)
		write (2, "max or min de int !\n", 20);
	else if (k == 2)
		write (2, "duplicate numbers !\n", 20);
	else
		write (2, "Error\n", 6);
	if (!p)
		exit (5);
	while (p)
	{
		s = p;
		p = p->next;
		free(s);
	}
	exit (1);
} 
