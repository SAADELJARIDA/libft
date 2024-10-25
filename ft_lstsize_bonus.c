#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	list_length;

	list_length = 0;
	while (lst)
	{
		list_length++;
		lst = lst->next;
	}
	return (list_length);
}
/*
#include <stdio.h>
#include <stdlib.h>

t_list *create_node(void *content) {
    t_list *new_node = malloc(sizeof(t_list));
    if (!new_node) return NULL; // Check for malloc failure
    new_node->content = content; // Set the content
    new_node->next = NULL; // Initialize next to NULL
    return new_node;
}
// Main function to test count_elements
int main() {
    t_list *head = NULL; // Start with an empty list

    // Create and add nodes to the list
    for (int i = 0; i < 5; i++) {
        int *value = malloc(sizeof(int)); // Allocate memory for the content
        if (!value) return 1; // Check for malloc failure
        *value = i + 1; // Set value (1 to 5)
        t_list *new_node = create_node(value);
        if (!new_node) return 1; // Check for malloc failure
        new_node->next = head; // Add to the front of the list
        head = new_node; // Update head
    }
	for(t_list *temp = head; temp; temp = temp->next)
	{
		printf("%d \n",*(int *)temp->content);
	}

    // Count the number of elements in the list
    int count = ft_lstsize(head);
    printf("Number of elements in the list: %d\n", count); // Print the count

    // Free the allocated memory (optional)
    t_list *current = head;
    while (current) {
        t_list *next = current->next;
        free(current->content); // Free content
        free(current); // Free node
        current = next; // Move to the next node
    }

}
*/
