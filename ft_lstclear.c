/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 11:18:34 by chdespon          #+#    #+#             */
/*   Updated: 2019/11/19 11:33:56 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *tmp1;
	t_list *tmp2;

	if (!lst || !del)
		return ;
	tmp1 = *lst;
	while (tmp1 != NULL)
	{
		tmp2 = tmp1->next;
		(del)(tmp1->content);
		free(tmp1);
		tmp1 = tmp2;
	}
	*lst = NULL;
}
