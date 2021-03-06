/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfabre <rfabre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 16:24:56 by rfabre            #+#    #+#             */
/*   Updated: 2016/12/01 11:40:34 by rfabre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1,const char *s2)
{
	int s1l;
	int c;
	int s2l;

	s1l = (ft_strlen(s1));
	s2l = (ft_strlen(s2));
	c = 0;
	while (c < s2l)
	{
		s1[s1l] = s2[c];
		s1l++;
		c++;
	}
	s1[s1l] = '\0';
	return (s1);
}
