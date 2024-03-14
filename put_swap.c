/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_swap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penquin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 02:00:10 by penquin           #+#    #+#             */
/*   Updated: 2024/03/14 15:05:43 by penquin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "put_swap.h"

int	ultimate_atoi(char *str,int i)
{
	int count = 1;

	while (ft_isdigit(str[i + count]))
		count++;
	if (!ft_iswspace(i + count))
		return (printf("Error"));
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
		else if (ft_isalpha(str[i]) && (ft_iswspace(str[i + 1]) || str[i + 1] == 0))
			num = str[i];
		else if (ft_isdigit(str[i]) || str[i] == "-")
		{
			num = ultimate_atoi(str, i);
		}
	}

}

t_lst	ft_input(int count, char **arg)
{
	t_lst	*lst;
	int		i;


	i = 1;
	while (i < count)
	{
		num = check_input(arg[i])
	}
	return (lst);
}
