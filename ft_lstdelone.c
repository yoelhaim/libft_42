/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:11:02 by yoelhaim          #+#    #+#             */
/*   Updated: 2021/11/09 21:27:21 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
void del(void *delete)
{

}
void ft_lstdelone(t_list *lst, void (*del)(void
*))
{
	del(lst->next);
	free(lst);
}

int main()
{
	t_list *head;

	ft_lstdelone("awbx", del);

	while (head)
	{
		 printf("head => %s , adress => %p\n", head->content, head);
		head = head->next;
	}
}
