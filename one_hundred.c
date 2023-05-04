 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   one_hundred.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolahmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 10:15:15 by nolahmar          #+#    #+#             */
/*   Updated: 2023/05/04 10:15:44 by nolahmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	srch_idx(t_list *stack_b, int index)
{
	int	i;

	i = 0;
	while (stack_b)
	{
		if (stack_b->index == index)
			return (i);
		i++;
		stack_b = stack_b->next;
	}
	return (i);
}

void    initializ_one(t_list *stack_a)
{
    while (stack_a)
    {
        stack_a->index = -1;
        stack_a = stack_a->next;
    }
}

void    rank(int min, t_list *stack_a)
{
    static int i;

    while (stack_a)
    {
        if (stack_a->content == min)
        {
            stack_a->index = i;
            i++;
        }
        stack_a = stack_a->next;
    }
}

void	dividing_stack_a_one(t_list **stack_a, t_list **stack_b, int start, int end)
{
	int	i;

	i = start;
	while (i < end)
	{
		if ((*stack_a)->index >= start && (*stack_a)->index < end)
		{
			if (lstsize(stack_b)
				&& (*stack_a)->index <= start + (end - start) / 2)
			{
				pb(stack_b, stack_a, 1);
				if ((*stack_a) && (*stack_a)->index > end)
					rr(stack_a, stack_b, 1);
				else
					rb(stack_b, 1);
			}
			else
				pb(stack_b, stack_a, 1);
			i++;
		}
		else
			ra(stack_a, 1);
	}

}

void	one_hundred(t_list **a, t_list **b)
{
	int		size;
	int		i;

	i = -1;
	size = lstsize(a);
	initializ_one(*a);
	initialize_index(a, size - 1);
	while (++i < 5)
		dividing_stack_a_one(&(*a), b, ((i * size ) / 5), ((i + 1) * size) / 5);
	while (*b)
	{
		if ((*b)->index == size - 1)
		{
			pa(a, b, 1);
			size--;
		}
		else
		{
			if (srch_idx((*b), size - 1) < size / 2)
				rb(b, 1);
			else
				rrb(b, 1);
		}
	}
}

