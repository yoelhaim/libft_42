/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 10:48:19 by yoelhaim          #+#    #+#             */
/*   Updated: 2021/11/06 11:40:38 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
// #include "ft_isalnum.c"
// #include "ft_isalpha.c"
// #include "ft_isascii.c"
#include "ft_isprint.c"
#include "ft_strlen.c"
#include "ft_toupper.c"
#include "ft_tolower.c"
#include "ft_atoi.c"
#include "ft_strchr.c"
#include "ft_strrchr.c"
#include "ft_memcpy.c"
#include "ft_memset.c"
#include "ft_bzero.c"
#include "ft_strdup.c"
#include "ft_memchr.c"
#include "ft_memcmp.c"
#include "ft_strnstr.c"
#include "ft_calloc.c"
#include "ft_memmove.c"
#include "ft_strlcat.c"
int main(int ac, char **av)
{
	char str[]= "abcdef";
	char dest[]="sddwtwyuuytwytywtwyt";
	char baffur[10];
// printf("%d", ft_isalpha('@'));
// printf("%d", ft_isalnum('!'));
	//printf("%c", ft_tolower('$'));
//	printf("%s", strnstr(av[1], av[2],2));
//  printf("%s", bzero(str, 5));
//  ft_bzero(str, 5);
//  printf("%s",calloc(4, 5));
// printf("%s	\n", str+2);
// printf("%d", ft_atoi("-1234"));
// printf("%s",ft_memmove(dest ,str,3) );
//	printf("%d", ft_isprint(127));
printf("%d",ft_memcmp("abc" ,"abc",3) );

// int i = 0;
// while(i < 10)
// {
// 	printf("%x \n",str[i]);
// 	i++;
// }

	// char destt[25]= "awbx" ;
	// char *srcc =  "kingsq";
	// printf("%zu\n", strlcat(destt,srcc,6));



}
