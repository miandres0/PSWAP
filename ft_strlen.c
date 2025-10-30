/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miandres <miandres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 16:46:09 by miandres          #+#    #+#             */
/*   Updated: 2025/10/30 16:05:38 by miandres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushlib.h"
// #include <stdlib.h>
// #include <unistd.h>
// #include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		count++;
		s++;
	}
	return (count);
}
