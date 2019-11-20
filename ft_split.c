/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 14:09:06 by chdespon          #+#    #+#             */
/*   Updated: 2019/11/20 14:33:02 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_words_count(char const *s, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

int		ft_start_word(char const *s, size_t index, char c)
{
	if (index == 0 && s[index] != c)
		return (1);
	if (s[index] != c && s[index - 1] == c)
		return (1);
	return (0);
}

char	**ft_resolve(char **tab, char const *s, char c)
{
	unsigned int	i;
	size_t			j;
	size_t			k;

	i = 0;
	k = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		j = 0;
		if (ft_start_word(s, i, c))
		{
			while (s[i + j] != c && s[i + j] != '\0')
				j++;
			tab[k++] = ft_substr(s, i, j);
		}
		i++;
	}
	tab[k] = NULL;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		w_count;

	tab = NULL;
	w_count = ft_words_count(s, c);
	if (!s)
		return (tab);
	if (!(tab = malloc(sizeof(char *) * (w_count + 1))))
		return (NULL);
	return (ft_resolve(tab, s, c));
}
