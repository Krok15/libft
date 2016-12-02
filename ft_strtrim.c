/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfabre <rfabre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 22:26:46 by rfabre            #+#    #+#             */
/*   Updated: 2016/12/02 16:16:26 by rfabre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strtrim(char const *s)
{
	int i;
	int j;
	char *rslt;

	i = -1;
	if (s == NULL)
		return (NULL);
	j = ft_strlen(s);
	while (s[j- 1] == ' ' || s[j - 1] == '\n' || s[j - 1] == '\t')
		j--;
	while (s[i++] == ' ' || s[i] == '\n' || s[i] == '\t')
		j--;
	if (j < 0)
		j = 0;
	if ((rslt = (char*)malloc(sizeof(char) * (j + 1))) == NULL)
		return (NULL);
	s += i;
	i = -1;
	while (++i < j)
		rslt[i] = *s++;
	rslt[i] = '\0';
	return (rslt);
}
