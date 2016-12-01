/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfabre <rfabre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 10:30:44 by rfabre            #+#    #+#             */
/*   Updated: 2016/12/01 13:54:20 by rfabre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int i;
	int s2l;
	char *cbig;
	
	cbig = (char *)big;
	i = 0;
	s2l = (ft_strlen(little));
	while (big[i] != '\0')
	{
		if ((ft_strncmp((big +i), little, s2l) == 0))
			return ((cbig) + i);
		else
			i++;
	}
	if (little[0] == '\0')
		return (cbig);
	return (NULL);
}
