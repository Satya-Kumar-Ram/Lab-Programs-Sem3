#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head, *tail = NULL;
void addNode(int data)
{
    struct node *newnode = malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;

    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    else
    {
        tail->next = newnode;
        tail = newnode;
        tail->next = NULL;
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
        printf("\nPrinting the elements are: ");
        struct node *current = head;
        while (current != NULL)
        {
            printf("%d ", current->data);
            current = current->next;
        }
    }
}
void insert_loc(int data)
{
    int c = 1, pos;
    struct node *newnode = malloc(sizeof(struct node));
    newnode->data = data;

    printf("\nEnter the position in which newnode to be added: ");
    scanf("%d", &pos);

    struct node *x, *y;
    x = head;
    while (c < pos)
    {
        y = x;
        x = x->next;
        c++;
    }
    y->next = newnode;
    newnode->next = x;
}
void main()
{
    addNode(1);
    addNode(2);
    addNode(3);
    addNode(4);
    print_Data();

    insert_loc(10);
    print_Data();
}