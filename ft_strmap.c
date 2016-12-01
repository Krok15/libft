/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfabre <rfabre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 19:22:10 by rfabre            #+#    #+#             */
/*   Updated: 2016/12/01 19:33:05 by rfabre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int i;
	char *mapnstr;

	if (s != NULL && (*f) != NULL)
	{
		if ((mapnstr = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1))) == NULL)
			return (NULL);
		i = -1;
		while (s[++i])
		{
			mapnstr[i] = f(s[i]);
		}
		mapnstr[i] = '\0';
		return (mapnstr);
	}
	return (NULL);
}
