/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 01:58:46 by penquin           #+#    #+#             */
/*   Updated: 2024/03/14 20:06:59 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "put_swap.h"

int	main(int argc, char **argv)
{
	t_lst	*lst;

	if (argc <= 1)
	{
		ft_printf("Arg Error\n");
		return (0);
	}
	lst = ft_input(argc, argv);
	if (!lst)
		return (0);
	return (0);
}
