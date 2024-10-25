#include <libft.h>

void	ft_lstclear(t_list **lst, void (*del)(void*));
{
	t_list	*temp;
	if(lst)
	{
		while (temp)
		{
			temp = *lst -> next;
			del(lst->content);
			free(*lst);
			*lst -> temp;
		}
	}
	int main()
	{


}
