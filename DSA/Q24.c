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
        printf("List is empty!");
    }
    else
    {
        struct node *current = head;
        printf("\nPrinting the elements: ");
        do
        {
            printf("%d ", current->data);
            current = current->next;
        } while (current != head);
    }
}
void del_end()
{
    struct node *temp = tail->next;
    while (temp->next != tail)
    {
        temp = temp->next;
    }
    temp->next = tail->next;
    free(tail);
    tail = temp;
}
void main()
{
    addNode(1);
    addNode(2);
    addNode(3);
    addNode(4);
    print_Data();

    del_end();
    print_Data();
}
