/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 10:38:54 by yoelhaim          #+#    #+#             */
/*   Updated: 2021/11/06 10:46:16 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*fst_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;
	if (!haystack && !needle)
		return (0);
	if(needle[0] =='\0')
		return((char *)haystack);
	i =0;
	j=0;


return ((char *)haystack);
}
#include<stdio.h>
int main()
{
	char s[] ="hello every one in 1337";
	char f[]= "in";
	printf("%s", fst_strnstr(s,f,20));
}
