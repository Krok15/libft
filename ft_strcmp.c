/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfabre <rfabre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 22:24:30 by rfabre            #+#    #+#             */
/*   Updated: 2016/12/01 10:53:01 by rfabre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int i;
	int result;
	unsigned char *cs1;
	unsigned char *cs2;

	cs1 = (unsigned char *)s1;
	cs2 = (unsigned char *)s2;
	i = 0;
	while (cs1[i] || cs2[i])
	{
		if (cs1[i] == cs2[i])
			i++;
		else if (cs1[i] != cs2[i]) 
		{
			result = cs1[i] - cs2[i];
			return (result);
		}
	}
	result = 0;
	return (result);
}
