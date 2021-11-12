/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 21:26:20 by yoelhaim          #+#    #+#             */
/*   Updated: 2021/11/12 19:50:33 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
// void fun(unsigned int i, char s)
// {
// 	printf("index %d char %c", i, s);
// 	return (s -32);
// }

// void ft_add_index(unsigned int ysf, char *s)
// {
// 	printf("my ")
// // 	ft_putchar_fd(*s, 1);
// // 	ft_putchar_fd('[', 1);
// // 	ft_putnbr_fd(index, 1);
// // 	ft_putchar_fd(']', 1);
// // }
// int main()
// {
// 	char s[] = "youmer";
// 	ft_striteri(s, ft_add_index);
// 	// printf("%d \n", fun);
// }
