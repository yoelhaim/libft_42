/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:28:37 by yoelhaim          #+#    #+#             */
/*   Updated: 2021/11/10 10:47:31 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ls_new;

	ls_new = malloc(sizeof(t_list));
	if (!ls_new)
		return (NULL);
	ls_new->content = content;
	ls_new->next = NULL;
	return (ls_new);
}
// int		main(void)
// {

// 	t_list *head;

// 	head = ft_lstnew("awbx");
// 	head->next = ft_lstnew("king");
// 	head->next->next = ft_lstnew("was");
// 	head->next->next->next = ft_lstnew("here");

// 	while (head)
// 	{
// 		 printf("head => %s , adress => %p\n", head->content, head);
// 		head = head->next;
// 	}
// }
