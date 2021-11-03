/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:11:02 by yoelhaim          #+#    #+#             */
/*   Updated: 2021/11/03 12:30:00 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void *p;
	size_t i;
	size_t n;
	char	*str;

	n = count * size;
	p = malloc(n);
	if(!p)
		return (NULL);
	i = 0;
	if(n == 0)
		return (NULL);
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
	return (p);
}
