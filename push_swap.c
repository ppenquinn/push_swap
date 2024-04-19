/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 02:00:10 by penquin           #+#    #+#             */
/*   Updated: 2024/04/18 15:33:17 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_subtract(char *str, int i)
{
	int		count;
	int		num;
	char	*s;

	count = 1;
	while (ft_isdigit(str[i + count]))
		count++;
	s = ft_substr(str, i, count); //malloc
	if (!s)
		return (NULL);
	return (s);
}

t_lst	*check_input(char *str)
{
	int		i;
	t_lst	*set;
	t_lst	*tail;
	char	*digit;

	i = 0;
	while (str[i])
	{
		if (ft_iswspace(str[i])) //white space
			i++;
		else if (ft_isdigit(str[i]) || str[i] == '+' || str[i] == '-')
		{
			digit = ft_subtract(str, i);
			set = ft_createnode(digit, set, &tail); //malloc
			i++;
		}
		else
		{
			ft_printf("check input error");
			return (NULL);
		}
	}
	return (set);
}

t_lst	*ft_input(int count, char **arg)
{
	t_lst	*lst;
	int		i;
	int		num;

	i = 1;
	while (i < count)
	{
		ft_printf("At %d arg \n", i);
		lst = check_input(arg[i]);

		i++;
	}
	return (NULL);
}
