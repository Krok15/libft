/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfabre <rfabre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 15:26:55 by rfabre            #+#    #+#             */
/*   Updated: 2016/12/01 18:16:56 by rfabre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s1)
{
	char	*result;
	int		i;
	int j;

	i = 0;
	if (!s1)
		return (NULL);
	if (!(result = (char*)malloc(sizeof(char) * (ft_strlen(s1) + 1))))
		return (NULL);
	j = (ft_strlen(s1));
	while (j >= 0)
	{
		result[i] = s1[i];
		i++;
		j--;
	}
	return (result);
}
