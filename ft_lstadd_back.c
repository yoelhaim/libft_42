/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:14:21 by yoelhaim          #+#    #+#             */
/*   Updated: 2021/11/08 16:20:38 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*head;

	if (!*lst)
		*lst = new;
	else
	{
		head = *lst;
		while (head->next)
			head = head->next;
		head->next = new;
	}
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
// 	ft_lstadd_back(&head, struc1);
// 	ft_lstadd_back(&head, struc2);
// 	ft_lstadd_back(&head, struc3);
// 	ft_lstadd_back(&head, struc4);
// 	ft_lstadd_back(&head, struc5);

// 	while (head)
// 	{
// 		printf("%s\n", head->content);
// 		head = head->next;
// 	}
// }
