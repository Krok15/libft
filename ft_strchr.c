/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfabre <rfabre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 16:43:00 by rfabre            #+#    #+#             */
/*   Updated: 2016/12/01 11:20:42 by rfabre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char t;
	int i;
	char *ptr;

	i = 0;
	t = (char)c;
	ptr = (char *)s;
	while (ptr[i])
	{
		if (t == ptr[i])
			return (&ptr[i]);
	i++;
	}
	if (t == '\0' && ptr[i] == '\0')
	{
		return (&ptr[i]);
	}
	return (NULL);
}
