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
void add_At_Loc(struct node *head)
{
    int count = 0, location, i;
    struct Node *ptr = head;
    while (ptr != NULL)
    {
        ptr = ptr->link;
        count++;
    }
enteragain:
    printf("\nEnter a location between 1 to %d: ", count);
    scanf("%d", &location);
    if (location <= 1 || location >= count)
    {
        printf("Invalid location, Re-enter location\n");
        goto enteragain;
    }
    else
    {
        struct Node *newnode = malloc(sizeof(struct Node));
        printf("Enter the data: ");
        scanf("%d", &newnode->data);
        ptr = head;
        for (i = 1; i < location - 1; i++)
        {
            ptr = ptr->link;
        }
        newnode->link = ptr->link;
        ptr->link = newnode;
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

    add_At_Loc(head);
    print_Data(head);
}