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
    newnode->prev = NULL;
    newnode->data = data;
    newnode->next = NULL;

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
    struct node *current = head;
    if (head == NULL)
    {
        printf("List is empty!");
        return;
    }
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
void main()
{
    addNode(1);
    print_Data();
}