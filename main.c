/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 01:58:46 by penquin           #+#    #+#             */
/*   Updated: 2024/04/19 15:29:32 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_lst	*lst;

	if (argc <= 1 || ft_precheck(argv) == 0)
	{
		ft_printf("PRECHECK FAIL\n");
		return (0);
	}
	ft_printf("PRECHECK PASS\n");
	lst = ft_input(argc, argv);
	// if (!lst)
	// 	return (0);
	while (lst)
	{
		ft_printf("printing anwser ");
		ft_printf("%d\n",lst->content);
		lst = lst->next;
	}
	ft_printf("Program Finished\n");
	return (0);
}




