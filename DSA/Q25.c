#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
struct node *tail = NULL;
void addNode(int data)
{
    struct node *newnode = malloc(sizeof(struct node));
    newnode->data = data;

    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        newnode->next = head;
    }
    else
    {
        tail->next = newnode;
        tail = newnode;
        tail->next = head;
    }
}
void print_Data()
{
    if (head == NULL)
    {
        printf("\nList is empty!");
    }
    else
    {
        printf("\nPrinting the elements: ");
        struct node *current = head;
        do
        {
            printf("%d ", current->data);
            current = current->next;
        } while (current != head);
    }
}
void del_loc()
{
    if (head == NULL)
    {
        printf("\nList is empty!");
    }
    else
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