/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miandres <miandres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 13:15:43 by miandres          #+#    #+#             */
/*   Updated: 2025/10/30 13:26:32 by miandres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushlib.h"
#include <stdio.h>

static size_t	counter(const char *str, char c);
static char		*string(const char *s, char c);

static size_t	counter(const char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != c && (i == 0 || str[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static char	*string(const char *s, char c)
{
	int		count;
	char	*str;

	count = 0;
	while (s[count] && s[count] != c)
		count++;
	str = (char *)malloc((count + 1) * sizeof(char));
	str[count] = '\0';
	while (--count >= 0)
		str[count] = s[count];
	return (str);
}

char	*reverse_split(const char **s, char c)
{
	char	**strings;
	size_t	count;	
	int		j;
	int		i;

	count = counter(s, c);
	strings = (char **)malloc((count + 1) * sizeof(char *));
	if (!strings)
		return ((char **)0);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			strings[j] = string(s + i, c);
			i += ft_strlen(strings[j]) - 1;
			j++;
		}
		i++;
	}
	strings[j] = (char *)0;
	return (strings);
}
