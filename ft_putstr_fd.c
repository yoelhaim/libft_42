/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 18:18:01 by yoelhaim          #+#    #+#             */
/*   Updated: 2021/11/10 10:45:00 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}
//#include <fcntl.h>
// int main(int ac ,char **argv)
// {
// 	int fd = open(argv[1],  O_WRONLY | O_CREAT | O_TRUNC, 0644, 0);
// 	write (fd, argv[2], ft_strlen(argv[2]) );
// 	printf("%d", fd );

// }
