/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:01:05 by yoelhaim          #+#    #+#             */
/*   Updated: 2021/11/01 10:09:08 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(char *c)
{
	int	i;

	i = 0;

	while(c[i])
	{
		if((c[i] < 'a' || c[i] > 'z') && (c[i] < 'A' || c[i] > 'Z'))
			return (0);
		i++;

	}
	return (1);
}
#include <stdio.h>
int main()
{
	char arr[]= "avcD";
	printf("%d", ft_isalpha(arr));
}
