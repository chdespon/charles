/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:11:15 by chdespon          #+#    #+#             */
/*   Updated: 2019/11/18 15:42:30 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		is_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	if (c == '\0')
		return (1);
	return (0);
}

int		debut_de_mots(char const *s1, char const *set)
{
	int i;

	i = 0;
	while (s1[i])
	{
		if (is_set(s1[i], set) == 0)
			return (i);
		i++;
	}
	return (i);
}

int		fin_de_mots(char const *s1, char const *set)
{
	int i;
	int tmp;

	i = ft_strlen(s1);
	tmp = i;
	while (i > 0)
	{
		if (is_set(s1[i], set) == 0)
			return (i);
		i--;
	}
	return (tmp);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*tab;
	int		i;
	int		j;
	int		k;
	int		len;

	if (!s1 || !set)
		return (NULL);
	j = fin_de_mots(s1, set);
	i = debut_de_mots(s1, set);
	len = j - i;
	tab = NULL;
	if (!(tab = malloc(sizeof(char) * (len + 2))))
		return (NULL);
	k = 0;
	while (k <= len)
	{
		tab[k] = s1[i];
		k++;
		i++;
	}
	tab[k] = '\0';
	return (tab);
}
