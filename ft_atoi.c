/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolahmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 10:27:30 by nolahmar          #+#    #+#             */
/*   Updated: 2023/05/04 10:27:40 by nolahmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(char *str, t_list *p)
{
	int		x;
	int		i;
	long	nbr;

	i = 0;
	nbr = 0;
	x = 1;
	if (str[i] == '-')
	{
		x = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = (nbr * 10) + (str[i] - 48);
		i++;
	}
	if (nbr * x > 2147483647 || nbr * x < -2147483648)
		ft_error_lst(p, 1);
	return (nbr * x);
}


