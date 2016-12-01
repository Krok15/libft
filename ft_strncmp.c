/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfabre <rfabre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 15:13:14 by rfabre            #+#    #+#             */
/*   Updated: 2016/12/01 16:02:14 by rfabre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	result;
	size_t	i;
	unsigned char *cs1;
	unsigned char *cs2;

	cs1 = (unsigned char*)s1;
	cs2 = (unsigned char*)s2;
	result = 0;
	i = 0;
	while ((cs1[i] != '\0') && (i < n))
	{
		if (cs2[i] == '\0')
			return (1);
		if (cs1[i] != cs2[i])
			return ((cs1[i] > cs2[i]) ? 1 : -1);
		i++;
	}
	if (cs2[i] != '\0' && i != n)
		return (-1);
	return (0);
}
