/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmccpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 10:58:27 by chdespon          #+#    #+#             */
/*   Updated: 2019/11/07 13:29:28 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	unsigned char		*p1;
	unsigned const char	*p2;

	p1 = s1;
	p2 = s2;
	while (n--)
	{
		*p1++ = *p2;
		if (*p2 == (unsigned char)c)
			return (p1);
		p2++;
	}
	return (NULL);
}
