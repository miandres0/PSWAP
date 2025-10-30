/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushlib.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miandres <miandres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 13:36:47 by miandres          #+#    #+#             */
/*   Updated: 2025/10/30 13:35:01 by miandres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHLIB_H
# define PUSHLIB_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_list
{
	int				num;
	struct s_list	*next;
}					t_list;

size_t	ft_strlen(const char *s);
int		ft_atoi(const char *str);
char	*ft_strjoin(const char *s1, const char *s2);
char	**ft_split(const char *s, char c);

#endif