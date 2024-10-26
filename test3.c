#include <stdio.h>
#include <stdlib.h>

typedef struct s_list {
	void	*content;
	struct s_list	*next;
} t_list;

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
