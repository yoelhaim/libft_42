/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:07:48 by yoelhaim          #+#    #+#             */
/*   Updated: 2021/11/05 12:03:07 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	str1;
	unsigned char	str2;

	i = 0;
	str1 = *(unsigned char *)s1;
	str2 = *(unsigned char *)s2;
	while (i < n)
	{
		if (str1 + i != str2 + i)
			return (str1 + i - str2 + i);
		i++;
	}
	return (str1 - str2);
}
