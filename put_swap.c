/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_swap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 02:00:10 by penquin           #+#    #+#             */
/*   Updated: 2024/03/17 01:44:57 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "put_swap.h"

int	ultimate_atoi(char *str, int i)
{
	int		count;
	int		num;
	char	*s;

	count = 1;
	while (ft_isdigit(str[i + count]))
		count++;
	ft_printf(" count is %d i(in ulti) is %d\n", count, i);
	if (!ft_iswspace(str[i + count]) && str[i + count])
		return (ft_printf("ultimate_atoi Error\n"));
	s = ft_substr(str, i, count); //malloc function
	// ft_printf("string is %s || len is %zu\n", s, ft_strlen(s));
	num = ft_atoi(s);
	return (num);
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
		// handle charectors
		// else if (ft_isalpha(str[i]) && (ft_iswspace(str[i + 1]) || str[i + 1] == 0))
		// {
		// 	num = str[i];
		// 	ft_printf("At %d word, The num is %d\n", i , num);
		// 	i++;
		// }
		else if (ft_isdigit(str[i]) || ((str[i] == '-' || str[i] == '+') && ft_isdigit(str[i + 1])))
		{
			ft_printf("\nin ulti_atoi\n");
			num = ultimate_atoi(str, i);
			i += num;
			ft_printf("i is %d\n", num);
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
