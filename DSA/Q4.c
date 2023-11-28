#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *link;
};
void createList(struct Node *ptr, int size)
{
    int i;
    for (i = 1; i < size; i++)
    {
        struct Node *temp = malloc(sizeof(struct Node));
        scanf("%d", &temp->data);
        temp->link = NULL;

        ptr->link = temp;
        ptr = ptr->link;
    }
}
void print_Data(struct Node *ptr)
{
    printf("Elements are: ");
    while (ptr != NULL)
    {
        printf(" %d", ptr->data);
        ptr = ptr->link;
    }
}
void add_End(struct node *head)
{
    struct Node *ptr = head;
    struct Node *newnode = malloc(sizeof(struct Node));
    printf("\nEnter the data to be inserted at the end: ");
    scanf("%d", &newnode->data);
    newnode->link = NULL;
    while (ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = newnode;
}
void main()
{
    int size;
    printf("Enter the size of the list: ");
    scanf("%d", &size);
    struct Node *head = malloc(sizeof(struct Node));
    printf("Enter the elements: ");
    scanf("%d", &head->data);
    head->link = NULL;
    struct Node *ptr = head;

    createList(ptr, size);
    print_Data(head);

    add_End(ptr);
    print_Data(head);
}