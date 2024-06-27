/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_util.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 02:05:35 by nappalav          #+#    #+#             */
/*   Updated: 2024/05/03 20:49:21 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_createnode(char *digit, t_lst **head, t_lst **tail)
{
	t_lst *node;

	node = (t_lst *)malloc(sizeof(t_lst));
	if (!node)
		return (0);
	node->content = ft_atoi(digit);
	node->next = NULL;
	if (!(*head))
	{
		printf("CREATING HEAD\n");
		*head = node;
	}
	if (*tail)
	{
		printf("CHANGING TAIL\n");
		(*tail)->next = node;
	}
	printf("NEW TAIL\n");
	*tail = node;
	printf("create node finished!\n\n");
	return (1);
}

int ft_precheck(char **str)
{
	size_t i;
	size_t j;
	int cnt;

	i = 1;
	cnt = 0;
	while (str[i])
	{
		j = 0;
		while (str[i][j])
		{
			if (ft_isdigit(str[i][j]) || ((str[i][j] == '+' ||
										   str[i][j] == '-') &&
										  (ft_isdigit(str[i][j + 1]) &&
										   (ft_iswspace(str[i][j - 1]) || j == 0))))
				cnt++;
			else if (!ft_iswspace(str[i][j]))
				return (0);
			j++;
		}
		i++;
	}
	if (cnt == 0)
		return (0);
	return (cnt);
}
