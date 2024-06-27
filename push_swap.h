/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 13:54:32 by nappalav          #+#    #+#             */
/*   Updated: 2024/04/22 16:50:31 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "./resource/libft/libft.h"
#include "./resource/ft_printf/ft_printf.h"

typedef struct s_lst
{
	int content;
	struct s_lst *next;
} t_lst;

int ft_precheck(char **str);
t_lst *ft_input(int count, char **arg);
t_lst *check_input(char *str);
char *ft_subtract(char *str, int i);
size_t ft_createnode(char *digit, t_lst **head, t_lst **tail);

#endif
