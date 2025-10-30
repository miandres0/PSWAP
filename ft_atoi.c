/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miandres <miandres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 11:41:56 by miandres          #+#    #+#             */
/*   Updated: 2025/10/30 16:05:22 by miandres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushlib.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	number;

	number = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || (9 <= str[i] && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		sign = 44 - str[i];
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10 + (str[i] - '0');
		i++;
	}
	return (sign * number);
}
