/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 18:20:34 by yoelhaim          #+#    #+#             */
/*   Updated: 2021/11/02 12:51:17 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*last;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			last = (char *) s + i;
		i++;
	}
	if (c == '\0')
	{
		return ((char *) last + i);
	}
	return ((char *) 0);
}
