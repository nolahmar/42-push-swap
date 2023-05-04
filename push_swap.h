/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolahmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 10:16:54 by nolahmar          #+#    #+#             */
/*   Updated: 2023/05/04 10:17:18 by nolahmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

typedef struct s_list{
	int				content;
	int				index;
	struct s_list	*next;
}	t_list;

int   ft_strlen( char *str);
void error_exit(void);
void help(char *s, t_list **stack_a, t_list **stack_b);
void checker(t_list **stack_a);
void five_hundred(t_list **a, t_list **b);
int index_min(t_list *stack_a, int min);
int min_five(t_list *stack_a, int *min);
void sort_five(t_list **stack_a, t_list **b);
int ft_atoi(char *str, t_list *p);
char **ft_split(char *s, char c);
void ft_error_lst(t_list *p, int k);
char *get_next_line(int fd);
char   *ft_strjoin(char *s1, char *s2);
char    *ft_line_with_newline(char    *str);
char *ft_strjoin(char *s1, char *s2);
void rrr(t_list **stack_a, t_list **stack_b);
t_list **sa(t_list **lst, int k);
void lstadd_back(t_list **lst, t_list *new);
void sb(t_list **lst, int k);
void ra(t_list **lst, int k);
void rb(t_list **lst, int k);
void rr(t_list **a, t_list **b, int k);
void rra(t_list **lst, int k);
void rrb(t_list **lst, int k);
void pa(t_list **a, t_list **b, int k);
void pb(t_list **b, t_list **a, int k);
void ss(t_list *stack_a, t_list *stack_b);
t_list *lstnew(int content);
void lstadd_front(t_list **lst, t_list *new);
int lstsize(t_list **lst);
t_list *lstlast(t_list *lst);
int check_dig_sign(char **av);
int repeat_of_numbers(t_list *p);
t_list *concat_arg(char **av);
void one_hundred(t_list **a, t_list **b);
void initialize_index(t_list **stack_a, int max_index);
int acses(t_list *stack_a);
void push_swap(t_list **stack_a);
int sort_three(t_list **a);
int	check_dig_sign(char **av);
int		sort_three_rra_and_write(t_list **a);
int		sort_three_ra_and_write(t_list **a);
int		sort_three_sa_and_write(t_list **a);
int		sort_three_sa_ra(t_list **a);
int		sort_three_sa_rra(t_list **a);
int	srch_idx(t_list *stack_b, int index);
void    rank(int min, t_list *stack_a);
int	a_is_sorted(t_list *nums);
t_list	*concat_arg(char **av);

#endif

