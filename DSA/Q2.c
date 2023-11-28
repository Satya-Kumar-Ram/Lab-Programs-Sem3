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
}