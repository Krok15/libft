/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfabre <rfabre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 10:07:23 by rfabre            #+#    #+#             */
/*   Updated: 2016/12/01 10:53:28 by rfabre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	unsigned char *cs1;
	unsigned char *cs2;

	i = -1;
	cs1 = (unsigned char *)s1;
	cs2 = (unsigned char *)s2;
	while (++i < n)
	{
		if (((int)(cs1[i]) != (cs2[i])))
			return ((int)(cs1[i]) - (cs2[i]));
	}
	return (0);
}
