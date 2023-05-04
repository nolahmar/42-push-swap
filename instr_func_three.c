/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instr_func_three.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolahmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 10:22:11 by nolahmar          #+#    #+#             */
/*   Updated: 2023/05/04 10:22:29 by nolahmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrr(t_list **stack_a, t_list **stack_b)
{
	t_list	*p;
	t_list	*new;

	if (!(*stack_a) || !(*stack_b) || !(*stack_a)->next || !(*stack_b)->next)
		return ;
	p = (*stack_a);
	while (p->next->next)
		p = p->next;
	new = p->next;
	p->next = NULL;
	lstadd_front(stack_a, new);
	p = (*stack_b);
	while (p->next->next)
		p = p->next;
	new = p->next;
	p->next = NULL;
	lstadd_front(stack_b, new);
}

