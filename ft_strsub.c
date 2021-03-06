/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfabre <rfabre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 19:53:57 by rfabre            #+#    #+#             */
/*   Updated: 2016/12/01 22:06:44 by rfabre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *temp;
	size_t i;

	i = -1;
	if ((temp = (char*)malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	if (s != NULL)
		while (++i < len)
			temp[i] = s[start + i];
		temp[i] = '\0';
	return (temp);

}
