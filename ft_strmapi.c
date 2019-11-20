/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 17:03:17 by chdespon          #+#    #+#             */
/*   Updated: 2019/11/18 15:44:36 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*map;
	int		i;

	if (!s || !f)
		return (NULL);
	if ((map = ft_strdup(s)))
	{
		i = 0;
		while (map[i])
		{
			map[i] = (*f)(i, map[i]);
			i++;
		}
	}
	return (map);
}
