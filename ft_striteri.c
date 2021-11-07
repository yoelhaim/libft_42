/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 21:26:20 by yoelhaim          #+#    #+#             */
/*   Updated: 2021/11/07 16:17:58 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int,
char*))
{
	size_t	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}
// char fun (unsigned int i, char s)
// {
// 	printf("index %d char %c", i, s);
// 	return (s -32);
// }
// int main()
// {
// 	char s[]= "youmer";
// 	ft_striteri(s,fun);
// 	printf("%d \n", fun);

// }
