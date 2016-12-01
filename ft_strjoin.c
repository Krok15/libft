/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfabre <rfabre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 21:28:15 by rfabre            #+#    #+#             */
/*   Updated: 2016/12/01 22:25:17 by rfabre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *rslt;
	int i;
	
	i = -1;
	if ((rslt = (char*)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1))) == NULL)
		return (NULL);
	if (s1 != NULL && s2 != NULL)
	{
		while (*s1)
			rslt[++i] = *s1++;
		while (*s2)
			rslt[++i] = *s2++;
		rslt[++i] = '\0';
	return (rslt);
	}
	return (NULL);
}
