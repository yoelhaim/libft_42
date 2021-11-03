/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:07:48 by yoelhaim          #+#    #+#             */
/*   Updated: 2021/11/03 11:20:00 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	char	src1;
	char	src2;

	src1 = *(unsigned char *)s1;
	src2 = *(unsigned char *)s2;
	while (src1 && src2 && src1 == src2 && i < n)
		i++;
	return (src1 - src2);

}
