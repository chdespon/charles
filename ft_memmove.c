/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 12:07:53 by chdespon          #+#    #+#             */
/*   Updated: 2019/11/15 15:03:57 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	char		*p1;
	const char	*p2;

	p1 = s1;
	p2 = s2;
	if (s1 > s2)
		ft_memcpy(s1, s2, n);
	else if (s1 != s2)
	{
		while (n--)
			*p1++ = *p2++;
	}
	return (s1);
}
