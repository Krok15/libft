/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfabre <rfabre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 22:26:46 by rfabre            #+#    #+#             */
/*   Updated: 2016/12/01 23:07:48 by rfabre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strtrim(char const *s)
{
	int i;
	int j;
	char *rslt;

	i = 0;
	if (s == NULL)
		return (NULL);
	j = ft_strlen(s);
	while (ft_isspace(s[j]))
		j--;
	while (ft_isspace(s[i]))
		i++;
	if (j < 0)
		j = 0;
	if ((rslt = (char*)malloc(sizeof(char) * (j + i + 1))) == NULL)
		return (NULL);
	s += i;
	i = -1;
	while (++i < j)
		rslt[i] = *s++;
	rslt[i] = '\0';
	return (rslt);
}
