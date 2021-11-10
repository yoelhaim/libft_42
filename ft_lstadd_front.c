/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:39:21 by yoelhaim          #+#    #+#             */
/*   Updated: 2021/11/09 17:01:30 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
// int main(void)
// {

// 	t_list *head = NULL;
// 	char test5[] = "test-test-test5";
// 	char test4[] = "test-test-test4";
// 	char test3[] = "test-test-test3";
// 	char test2[] = "test-test-test2";
// 	char test1[] = "test-test-test1";

// 	t_list *struc5 = ft_lstnew(test5);
// 	t_list *struc4 = ft_lstnew(test4);
// 	t_list *struc3 = ft_lstnew(test3);
// 	t_list *struc2 = ft_lstnew(test2);
// 	t_list *struc1 = ft_lstnew(test1);
// 	ft_lstadd_front(&head, struc1);
// 	ft_lstadd_front(&head, struc2);
// 	ft_lstadd_front(&head, struc3);
// 	ft_lstadd_front(&head, struc4);
// 	ft_lstadd_front(&head, struc5);

// 	while (head)
// 	{
// 		printf("%s\n", head->content);
// 		head = head->next;
// 	}
// }
