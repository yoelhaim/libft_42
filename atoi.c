/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:05:45 by yoelhaim          #+#    #+#             */
/*   Updated: 2021/11/01 16:16:25 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int n;
	int	r;
	
	i = 0;
	n = 1;
	r = 0;
	while(str[i] <= 32)
		i++;
	if(str[i]== '-')
	{
		n = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while(str[i] && str[i] >= '0' && str[i] <= '9')
	{
		r *=10;
		r += str[i] -48;
		i++;
	}
	return (r * n);
}
