#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *head, *tail = NULL;
void addNode(int data)
{
    struct node *newnode = malloc(sizeof(struct node));
    newnode->data = data;

    if (head == NULL)
    {
        head = tail = newnode;
        head->prev = NULL;
        tail->next = NULL;
    }
    else
    {
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
        tail->next = NULL;
    }
}
void print_Data()
{

    if (head == NULL)
    {
        printf("List is empty!");
        return;
    }
    else
    {
        struct node *current = head;
        printf("\nElements are: ");
        while (current != NULL)
        {
            printf(" %d", current->data);
            current = current->next;
        }
    }
}
void del_loc()
{
    int c = 1, pos;
    printf("\nEnter the position to be deleted: ");
    scanf("%d", &pos);

    struct node *x, *y;
    x = head;
    while (c < pos)
    {
        y = x;
        x = x->next;
        c++;
    }
    y->next = x->next;
    free(x);
}
void main()
{
    addNode(1);
    addNode(2);
    addNode(3);
    addNode(4);
    print_Data();

    del_loc();
    print_Data();
}