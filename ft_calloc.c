/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 11:28:17 by chdespon          #+#    #+#             */
/*   Updated: 2019/11/18 16:20:21 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	void	*tab;

	if (!count || !size)
		return (ft_strdup(""));
	if (!(tab = malloc(size * count)))
		return (0);
	i = 0;
	while (i < (count * size))
	{
		((unsigned char *)tab)[i] = 0;
		i++;
	}
	return (tab);
}
