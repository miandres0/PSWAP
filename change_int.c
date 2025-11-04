/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   change_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miandres <miandres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 13:43:10 by miandres          #+#    #+#             */
/*   Updated: 2025/11/04 15:25:11 by miandres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Percorrer a lista e mudar o inteiros
#include "pushlib.h"

void	change_int(t_list **lst)
{
	t_list	*first;
	t_list	*run;
	int		new_value;

	first = *lst;

	while (lst)
	{
		run = first;
		new_value = 0;
		while (run)
		{
			if ((*lst->num) > run->num)
				new_value++;
			run = run->next;
		}
		lst = lst->next;
	}
}
