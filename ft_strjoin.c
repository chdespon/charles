/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 16:02:46 by chdespon          #+#    #+#             */
/*   Updated: 2019/11/20 12:09:59 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*join(char const *s1, char const *s2, char *dest)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (s1[j])
	{
		dest[i] = s1[j];
		i++;
		j++;
	}
	j = 0;
	while (s2[j])
	{
		dest[i] = s2[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*dest;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	while (s1[i])
		i++;
	j = 0;
	while (s2[j])
		j++;
	dest = NULL;
	if (!(dest = malloc(sizeof(char) * (i + j) + 1)))
		return (NULL);
	join(s1, s2, dest);
	return (dest);
}
