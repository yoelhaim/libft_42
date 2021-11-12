/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 19:27:43 by yoelhaim          #+#    #+#             */
/*   Updated: 2021/11/12 16:34:02 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_size(int n)
{
	size_t	i;

	i = 0;
	if (n < 0)
		n *= -1;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	size_t	i;
	long	nb;
	size_t	len;
	char	*str;

	nb = (long)n;
	len = count_size(nb);
	i = 0;
	if (nb < 0 || len == 0)
		len++;
	str = malloc(len);
	if (!str)
		return (NULL);
	if (nb < 0)
	{
		nb *= -1;
		str[0] = '-';
		i++;
	}
	while (len-- > i)
	{
		str[len] = (nb % 10) + 48;
		nb /= 10;
	}
	return (str);
}

// int main()
// {
// 	printf("%s", ft_itoa(123));
// }
