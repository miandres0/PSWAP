/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miandres <miandres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 17:42:36 by miandres          #+#    #+#             */
/*   Updated: 2025/10/30 16:09:19 by miandres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushlib.h"
// #include <stdlib.h>
// #include <unistd.h>
// #include <stdio.h>

char	*ft_strjoin(const char *s1, const char *s2)
{
	int		size;
	char	*joint;
	int		i;
	int		j;
	
	size = ft_strlen(s1) + ft_strlen(s2) + 2;
	joint = (char *)malloc(size);
	if (!joint)
		return ((char *)0);
	i = 0;
	while (s1[i])
	{
		joint[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		joint[(i + j)] = s2[j];
		j++;
	}
	joint[i + j] = ' ';
	joint[size] = '\0';
	return (joint);
}
