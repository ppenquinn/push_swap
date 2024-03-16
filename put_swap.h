/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_swap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 01:52:13 by penquin           #+#    #+#             */
/*   Updated: 2024/03/15 23:39:55 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUT_SWAP_H
# define PUT_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "resource/libft/libft.h"
# include "resource/ft_printf/ft_printf.h"

typedef struct s_lst
{
	int				content;
	struct s_lst	*next;
}	t_lst;

t_lst	*ft_input(int count, char **arg);

#endif
