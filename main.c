/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penquin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 01:58:46 by penquin           #+#    #+#             */
/*   Updated: 2024/03/14 02:46:26 by penquin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "put_swap.h"

int	main(int argc, char **argv)
{
	t_lst	*lst;

	if (argc <= 1)
		return (NULL);
	lst = ft_input(argc, argv);
	if (!lst)
		return (NULL);
}
