/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfabre <rfabre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 15:10:54 by rfabre            #+#    #+#             */
/*   Updated: 2016/11/28 20:46:35 by rfabre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	while (n--)
	{
		*((char *)s + n) = '\0';
	}
}
