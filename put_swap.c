/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_swap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 02:00:10 by penquin           #+#    #+#             */
/*   Updated: 2024/03/14 20:20:27 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "put_swap.h"

int	ultimate_atoi(char *str,int i)
{
	int		count = 1;
	char	*s;

	while (ft_isdigit(str[i + count]))
		count++;
	if (!ft_iswspace(str[i + count]))
		return (ft_printf("ultimate_atoi Error\n"));
	s = ft_substr(str, i, count); //malloc function
	printf("string is %s", s);
	return(ft_strlen(s));
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
		{
			num = str[i];
			ft_printf("At %d word, The num is %d\n", i , num);
			i++;
		}
		else if (ft_isdigit(str[i]) || str[i] == '-')
		{
			num = ultimate_atoi(str, i);
			i += num;
			ft_printf("ulti_atoi\n");
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
