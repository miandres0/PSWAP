/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miandres <miandres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 16:50:21 by miandres          #+#    #+#             */
/*   Updated: 2025/11/04 13:38:37 by miandres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushlib.h"
// #include <stdlib.h>
// #include <unistd.h>
// #include <stdio.h>

// size_t	ft_strlen(const char *s)
// {
// 	size_t	count;

// 	count = 0;
// 	while (*s)
// 	{
// 		count++;
// 		s++;
// 	}
// 	return (count);
// }

// char	*ft_strjoin(const char *s1, const char *s2)
// {
// 	int		size;
// 	char	*joint;
// 	int		i;
// 	int		j;
	
// 	size = ft_strlen(s1) + ft_strlen(s2) + 1;
// 	joint = (char *)malloc(size);
// 	if (!joint)
// 		return ((char *)0);
// 	i = 0;
// 	while (s1[i])
// 	{
// 		joint[i] = s1[i];
// 		i++;
// 	}
// 	j = 0;
// 	while (s2[j])
// 	{
// 		joint[(i + j)] = s2[j];
// 		j++;
// 	}
// 	joint[i + j] = ' ';
// 	joint[size] = '\0';
// 	return (joint);
// }

// static size_t	counter(const char *str, char c);
// static char		*string(const char *s, char c);

// static size_t	counter(const char *str, char c)
// {
// 	int	i;
// 	int	count;

// 	i = 0;
// 	count = 0;
// 	while (str[i])
// 	{
// 		if (str[i] != c && (i == 0 || str[i - 1] == c))
// 			count++;
// 		i++;
// 	}
// 	return (count);
// }

// static char	*string(const char *s, char c)
// {
// 	int		count;
// 	char	*str;

// 	count = 0;
// 	while (s[count] && s[count] != c)
// 		count++;
// 	str = (char *)malloc((count + 1) * sizeof(char));
// 	str[count] = '\0';
// 	while (--count >= 0)
// 		str[count] = s[count];
// 	return (str);
// }

// char	**ft_split(const char *s, char c)
// {
// 	char	**strings;
// 	size_t	count;	
// 	int		j;
// 	int		i;

// 	count = counter(s, c);
// 	strings = (char **)malloc((count + 1) * sizeof(char *));
// 	if (!strings)
// 		return ((char **)0);
// 	i = 0;
// 	j = 0;
// 	while (s[i])
// 	{
// 		if (s[i] != c)
// 		{
// 			strings[j] = string(s + i, c);
// 			i += ft_strlen(strings[j]) - 1;
// 			j++;
// 		}
// 		i++;
// 	}
// 	strings[j] = (char *)0;
// 	return (strings);
// }
// int check_str(char *s)
// {
// 	int	i;
// 	int	r;
	
// 	r = 1;
// 	if (!s)
// 		return (0);
// 	i = 0;
// 	while (s[i])
// 	{
// 		if (s[i] != ' ' && (s[i] < '0' || '9' < s[i]))
// 		{
// 			if (s[i] == '+' || s[i] == '-')
				
// 		}
// 		s++;
// 	}
// }

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*str;
	char	*temp;
	char	**numbers;
	long int	num;

	i = 1;
	while (i < argc)
	{
		if (i == 1)
			str = ft_strjoin("", argv[i]);
		else
		{
			temp = ft_strjoin(str, argv[i]);
			free(str);
			str = temp;
		}
		i++;
	}
	printf("%s, %zu", str, atol(str));
	// if (check_str(str)) dar free em str
	numbers = ft_split(str, ' ');
	// if !numbers return 1
	j = 0;
	while (numbers[j])
	{
		num = ft_atol(numbers[j]);
		if (-2147483648 <= num && num <= 2147483647)
		{
			// criar novo nó 
		}
		else 
			// free em str, numbers (como), todos nós
		j++;
		printf("\n%zu\n", numbers[j]);
	}
	
	
}
