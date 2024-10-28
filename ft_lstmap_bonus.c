/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jari <sel-jari@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 13:41:02 by sel-jari          #+#    #+#             */
/*   Updated: 2024/10/27 13:46:39 by sel-jari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*elem;

	new_lst = NULL;
	while (lst && f)
	{
		elem = ft_lstnew(f(lst->content));
		if (!elem)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, elem);
		lst = lst->next;
	}
	return (new_lst);
}
/*
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst -> next;
	}
}

t_list	*create_list(void *content)
{
	t_list *node;

	node =  malloc(sizeof(t_list));
	if(!node)
		return NULL;
	node->content = content;
	node->next = NULL;
	return node;
	
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	temp = *lst;
	if (!*lst)
	{
		*lst = new;
	}
	else
	{
		while (temp->next)
			temp = temp -> next;
		temp -> next = new;
		new->next = NULL;
	}
}
void	printf_list(void *content)
{
		printf("%d ",*(int *)content);
}
int main()
{
	t_list *head;
	head = NULL;
	int	*value;

	for(int i = 0; i < 5; i++)
	{
		value = malloc(sizeof(int));
		*value = i + 1;
		ft_lstadd_back(&head, create_list(value));
	}
	ft_lstiter(head, printf_list);
	t_list *temp,*next;

	temp = head;
	while(temp)
	{
		next = temp->next;
		free(temp->content);
		free(temp);
		temp = next;
	}
}
*/
/*
void	ft_print_result(t_list *elem)
{
	int		len;

	len = 0;
	while (((char *)elem->content)[len])
		len++;
	write(1, ((char *)elem->content), len);
	write(1, "\n", 1);
}

t_list	*ft_lstnewone(void *content)
{
	t_list	*elem;

	elem = (t_list *)malloc(sizeof(t_list));
	if (!elem)
		return (NULL);
	if (!content)
		elem->content = NULL;
	else
		elem->content = content;
	elem->next = NULL;
	return (elem);
}

void	*ft_map(void *ct)
{
	int i;
	void	*c;
	char	*pouet;

	c = ct;
	i = -1;
	pouet = (char *)c;
	while (pouet[++i])
		if (pouet[i] == 'o')
			pouet[i] = 'a';
	return (c);
}

void    ft_del(void *content)
{
	free(content);
}

int main(int argc, const char *argv[])
{
	t_list		*elem;
	t_list		*elem2;
	t_list		*elem3;
	t_list		*elem4;
	t_list		*list;
	char		*str = strdup("lorem");
	char		*str2 = strdup("ipsum");
	char		*str3 = strdup("dolor");
	char		*str4 = strdup("sit");

	elem = ft_lstnewone(str);
	elem2 = ft_lstnewone(str2);
	elem3 = ft_lstnewone(str3);
	elem4 = ft_lstnewone(str4);
	alarm(5);
	if (argc == 1 || !elem || !elem2 || !elem3 || !elem4)
		return (0);
	elem->next = elem2;
	elem2->next = elem3;
	elem3->next = elem4;
	if (atoi(argv[1]) == 1)
	{
		if (!(list = ft_lstmap(elem, &ft_map, &ft_del)))
			return (0);
		if (list == elem)
			write(1, "A new list is not returned\n", 27);
		ft_print_result(list);
		while (list->next)
		{
			list = list->next;
			ft_print_result(list);
		}
	}
	return (0);
}
*/
