/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:05:45 by yoelhaim          #+#    #+#             */
/*   Updated: 2021/11/05 12:10:18 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_atoi(const char *str)
{
	size_t	i;
	size_t	n;
	size_t	r;

	i = 0;
	n = 1;
	r = 0;
	while (str[i] <= 32 && str[i] >= 127)
		i++;
	if (str[i] == '-')
	{
		n = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		r *= 10;
		r += str[i] - 48;
		i++;
	}
	return (r * n);
}
