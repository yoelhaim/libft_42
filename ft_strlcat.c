/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 21:01:41 by yoelhaim          #+#    #+#             */
/*   Updated: 2021/11/03 09:39:53 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	len(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *  dst, const char *  src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len_src;
	size_t	len_dest;

	len_src = len(src);
	len_dest = len(dst);
	if (len_dest > (dstsize - 1) || dstsize == 0)
		return (dstsize + len_src);
	i = len_dest;
	j = 0;
	while (i < dstsize - 1 && src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (len_src + len_dest);
}
/*
#include<stdlib.h>
#include <string.h>
#include <stdio.h>
int main()
{
	char dest[25]= "awbx" ;
	char *src =  "king";
	printf("%d \n", ft_strlcat(dest,src,6));
	if (dest[4] == '\0')
		printf("true \n");
	else
		printf("false \n");
	printf("%s\n", dest);

}*/
