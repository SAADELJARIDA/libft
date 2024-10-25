#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_element;

	new_element = malloc(sizeof(t_list));
	new_element->content = content;
	new_element->next = NULL;
	return (new_element);
}
/*
#include <stdio.h>
int main()
{
	char c = 'c';
	t_list	*ptr;
	ptr = ft_lstnew(&c);
	printf("%c",*(char *)ptr->content);
}
*/
