#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
void createList(struct node *ptr, int size)
{
    int i;
    for (i = 1; i < size; i++)
    {
        struct node *temp = malloc(sizeof(struct node));
        scanf("%d", &temp->data);
        temp->link = NULL;

        ptr->link = temp;
        ptr = ptr->link;
    }
}
void print_Data(struct node *ptr)
{
    printf("Elements are: ");
    while (ptr != NULL)
    {
        printf(" %d", ptr->data);
        ptr = ptr->link;
    }
}
void del_first(struct node **head, struct node *pointer)
{

    pointer = *head;
    *head = pointer->link;
    printf("\nDeleted element is: %d", pointer->data);
    free(pointer);
    pointer->link = NULL;
}
void main()
{
    int size;
    printf("Enter the size of the list: ");
    scanf("%d", &size);
    struct node *head = malloc(sizeof(struct node));
    printf("Enter the elements:\n");
    scanf("%d", &head->data);
    head->link = NULL;

    struct node *ptr = head;
    createList(ptr, size);
    print_Data(head);

    del_first(&head, ptr);
    printf("\nAfter deletion ");
    print_Data(head);
}