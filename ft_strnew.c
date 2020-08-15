/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 15:40:19 by jremarqu          #+#    #+#             */
/*   Updated: 2019/04/28 19:38:40 by jremarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	unsigned char	*arr;
	size_t			i;

	i = 0;
	arr = ft_memalloc(size + 1);
	if (arr == 0)
		return (0);
	return ((char*)arr);
}
