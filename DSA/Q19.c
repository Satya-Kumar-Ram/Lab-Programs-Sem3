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
    struct node *current = head;
    if (head == NULL)
    {
        printf("List is empty!");
    }
    else
    {
        printf("\nElements are: ");
        do
        {
            printf(" %d", current->data);
            current = current->next;
        } while (current != head);
    }
}
void main()
{
    addNode(1);
    addNode(2);
    addNode(3);
    addNode(4);
    print_Data();
}