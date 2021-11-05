/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:25:33 by yoelhaim          #+#    #+#             */
/*   Updated: 2021/11/05 11:18:21 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*str;
	char	*find;

	str = (char *)haystack;
	find = (char *) needle;
	i = 0;
	k = 0;
	j = 0;
	while (find[k])
		k++;
	if (k == 0)
		return (str);
	while (str[i] && i < len)
	{
		while (find[j] == str[i + j])
		{
			if (j == k - 1)
				return (str + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
