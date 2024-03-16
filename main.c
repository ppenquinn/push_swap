/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 01:58:46 by penquin           #+#    #+#             */
/*   Updated: 2024/03/17 02:03:42 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "put_swap.h"

int	ft_check_input(char **str)
{
	size_t	i;
	size_t	j;
	int		cnt;

	i = 1;
	cnt = 0;
	while (str[i])
	{
		j = 0;
		while (str[i][j])
		{
			if (ft_isdigit(str[i][j]) || ((str[i][j] == '+' ||
				str[i][j] == '-') && (ft_isdigit(str[i][j + 1]) &&
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
	return (1);
}

int	main(int argc, char **argv)
{
	// t_lst	*lst;

	if (argc <= 1 || !ft_check_input(argv))
	{
		ft_printf("Error\n");
		return (0);
	}
	// lst = ft_input(argc, argv);
	// if (!lst)
	// 	return (0);
	ft_printf("Input Pass\n");
	return (0);
}


