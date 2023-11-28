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
void del_At_Loc(struct node *head)
{
    int count = 0, location, i;
    struct Node *ptr = head, *q;
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
        ptr = head;
        for (i = 2; i < location; i++)
        {
            ptr = ptr->link;
        }
        // printf("Ptr positon: %d", ptr->data);
        q = ptr->link;
        ptr->link = q->link;
        q->link = NULL;
        free(q);
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

    del_At_Loc(head);
    print_Data(head);
}