/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolahmar <nolahmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 10:16:11 by nolahmar          #+#    #+#             */
/*   Updated: 2023/05/04 10:40:53 by nolahmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	initialize_index(t_list **stack_a, int max_index)
{
	t_list	*copy;
	int		min;

	while (max_index >= 0)
	{
		copy = *stack_a;
		while (copy)
		{
			if (copy->index == -1)
			{
				min = copy->content;
				break ;
			}
			copy = copy->next;
		}
		copy = *stack_a;
		while (copy)
		{
			if (min > copy->content && copy->index == -1)
				min = copy->content;
			copy = copy->next;
		}
		rank(min, *stack_a);
		max_index--;
	}
}

int	acses(t_list *stack_a)
{
	int	min;

	if (stack_a)
	{
		min = stack_a->content;
		stack_a = stack_a->next;
	}
	while (stack_a)
	{
		if (min > stack_a->content)
			return (-1);
		min = stack_a->content;
		stack_a = stack_a->next;
	}
	return (0);
}

void	push_swap(t_list **stack_a)
{
	t_list	*b;

	b = 0;
	if (lstsize(stack_a) == 1 || acses(*stack_a) == 0)
		exit (0);
	else if (lstsize(stack_a) == 2)
		sa(stack_a, 1);
	else if (lstsize(stack_a) == 3)
		sort_three(stack_a);
	else if (lstsize(stack_a) == 5 || lstsize(stack_a) == 4)
		sort_five(stack_a, &b);
	else if (lstsize(stack_a) <= 100)
		one_hundred(&(*stack_a), &b);
	else
		five_hundred(stack_a, &b);
	
}

