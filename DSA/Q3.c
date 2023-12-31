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
    }
}
void print_Data()
{
    struct node *current = head;
    if (head == NULL)
        printf("List is empty!");
    else
    {
        printf("\nElements are: ");
        while (current != NULL)
        {
            printf(" %d", current->data);
            current = current->next;
        }
    }
}
void insert_beg(int data)
{
    struct node *newnode = malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = head;
    head = newnode;
}
void main()
{
    addNode(1);
    addNode(2);
    addNode(3);
    addNode(4);
    print_Data();

    insert_beg(10);
    print_Data();
}