/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfabre <rfabre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 18:20:31 by rfabre            #+#    #+#             */
/*   Updated: 2016/12/01 18:40:32 by rfabre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *rslt;
	size_t i;
	
	i = -1;
	if (size == 0)
		return (NULL);
	if ((rslt = (char*)malloc(size + 1)) == NULL)
		return (NULL);
	while (++i < size + 1)
			rslt[i] = '\0';
	return (rslt);
}
