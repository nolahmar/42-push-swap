/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cheker.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolahmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 10:25:19 by nolahmar          #+#    #+#             */
/*   Updated: 2023/05/04 10:25:39 by nolahmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_exit(void)
{
	write(2, "Error\n", 6);
	exit (1);
}

void	help(char *s, t_list **stack_a, t_list **stack_b)
{
	if (s[0] == 'p' && s[1] == 'a' && s[2] == '\n')
		pa(stack_a, stack_b, 0);
	else if (s[0] == 'p' && s[1] == 'b' && s[2] == '\n')
		pb(stack_b, stack_a, 0);
	else if (s[0] == 'r' && s[1] == 'a' && s[2] == '\n')
		ra(stack_a, 0);
	else if (s[0] == 'r' && s[1] == 'b' && s[2] == '\n')
		rb(stack_b, 0);
	else if (s[0] == 'r' && s[1] == 'r' && s[2] == '\n')
		rr(stack_a, stack_b, 0);
	else if (s[2] == '\n')
		error_exit();
	else if (s[0] == 'r' && s[1] == 'r' && s[2] == 'a' && s[3] == '\n')
		rra(stack_a, 0);
	else if (s[0] == 'r' && s[1] == 'r' && s[2] == 'b' && s[3] == '\n')
		rrb(stack_b, 0);
	else if (s[0] == 'r' && s[1] == 'r' && s[2] == 'r' && s[3] == '\n')
		rrr(stack_a, stack_b);
	else
		error_exit();
}

void	checker(t_list **stack_a)
{
	t_list	*stack_b;
	char	*str;

	stack_b = NULL;
	str = "";
	while (str)
	{
		str = get_next_line(0);
		if (!str || !str[0])
			break ;
		if (str[0] == '\n' || str[1] == '\n')
			error_exit();
		if (str[0] == 's' && str[1] == 'a' && str[2] == '\n')
			sa(stack_a, 0);
		else if (str[0] == 's' && str[1] == 'b' && str[2] == '\n')
			sb(&stack_b, 0);
		else if (str[0] == 's' && str[1] == 's' && str[2] == '\n')
			ss(*stack_a, stack_b);
		else
			help(str, stack_a, &stack_b);
		if (!a_is_sorted(*stack_a) && !stack_b)
			break;
	}
	if (acses(*stack_a) == 0)
		write (2, "OK\n", 3);
	else
		write (2, "KO\n", 3);
}

int	main(int ac, char **av)
{
	t_list	*stack_a;

	if (ac < 2)
		exit (0);
	if (check_dig_sign(av) == -1)
	{
		write (2, "Error\n", 6);
		exit (1);
	}
	stack_a = concat_arg(av + 1);
	if (repeat_of_numbers(stack_a) == -1)
		ft_error_lst(stack_a, 2);
	else if (lstsize(&stack_a) == 0)
		ft_error_lst(stack_a, 2);
	checker(&stack_a);
}


