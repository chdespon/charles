/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 12:41:09 by chdespon          #+#    #+#             */
/*   Updated: 2019/11/19 15:55:10 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		len = 0;
	if (!(dest = malloc(sizeof(char) * len + 1)))
		return (NULL);
	i = 0;
	while (i < len)
		dest[i++] = s[start++];
	dest[i] = '\0';
	return (dest);
}
