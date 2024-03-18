/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 02:00:10 by penquin           #+#    #+#             */
/*   Updated: 2024/03/18 15:09:08 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ultimate_atoi(char *str, int i)
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
	num =
	return (s);
}

int	check_input(char *str)
{
	int	i;
	int	num;

	i = 0;
	while (str[i])
	{
		num = 0;
		if (ft_iswspace(str[i])) //white space
			i++;
		else if (ft_isdigit(str[i]) || str[i] == '+' || str[i] == '-')
		{
			num = ultimate_atoi(str, i);
			i += num;
			i++;
		}
		else
			return (ft_printf("check input Error\n"));
	}
	return (num);
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
		num = check_input(arg[i]);

		i++;
	}
	return (NULL);
}
