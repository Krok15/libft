/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfabre <rfabre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 16:48:44 by rfabre            #+#    #+#             */
/*   Updated: 2016/12/01 11:27:50 by rfabre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char t;
	int i;
	char *ptr;

	i = (ft_strlen(s));
	t = (char)c;
	ptr = (char *)s;
	while (i > 0)
	{
		if (t == ptr[i])
			return (&ptr[i]);
		i--;
	}
	if (t == '\0' && ptr[i] == '\0')
	{
		return (&ptr[i]);
	}
	return (NULL);
}

