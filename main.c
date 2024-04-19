/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 01:58:46 by penquin           #+#    #+#             */
/*   Updated: 2024/04/19 13:46:05 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_lst	*lst;

	if (argc <= 1 || ft_precheck(argv) == 0)
	{
		ft_printf("Error\n");
		return (0);
	}
	lst = ft_input(argc, argv);
	// if (!lst)
	// 	return (0);
	ft_printf("Input Pass\n");
	return (0);
}




