/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 18:20:34 by yoelhaim          #+#    #+#             */
/*   Updated: 2021/11/15 21:26:14 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;
	char	*temp;

	temp = NULL;
	i = 0;
	while (str[i])
		if (str[i++] == (char) c)
			temp = (char *)str + i - 1;
	if (!c)
		return ((char *)str + i);
	return (temp);
}
