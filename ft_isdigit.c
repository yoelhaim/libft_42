/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:10:06 by yoelhaim          #+#    #+#             */
/*   Updated: 2021/11/01 10:15:33 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(char *str)
{
	int	i;

	i = 0;
	 while(str[i])
	 {
		 if(str[i] < '0' || str[i] > '9')
			 return (0);
		 i++;
	 }
	 return (1);
}
#include <stdio.h>
int main(int ac, char **av)
{
	printf("%d", ft_isdigit(av[1]));
}
