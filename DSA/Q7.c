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
void print_Data(struct node *head)
{
    struct node *ptr = head;
    if (ptr->link == NULL)
        printf("Elements are: ");
    while (ptr != NULL)
    {
        printf(" %d", ptr->data);
        ptr = ptr->link;
    }
}
void del_Last(struct node *head, struct node *ptr)
{
    ptr = head;
    while (ptr->link->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = NULL;
}
void main()
{
    int size;
    printf("Enter the size of the list: ");
    scanf("%d", &size);
    struct node *head = malloc(sizeof(struct node));
    printf("Enter your elements:\n");
    scanf("%d", &head->data);
    head->link = NULL;

    struct node *ptr = head;
    createList(ptr, size);
    print_Data(head);

    del_Last(head, ptr);
    printf("\nAfter deletion ");
    print_Data(head);
}