/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_swap_util.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 02:05:35 by nappalav          #+#    #+#             */
/*   Updated: 2024/03/17 02:07:54 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_precheck(char **str)
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
	return (cnt);
}
