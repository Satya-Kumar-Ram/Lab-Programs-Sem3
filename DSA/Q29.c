#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front = NULL;
struct node *rear = NULL;
void enqueue()
{
    int data;
    struct node *temp;
    temp = malloc(sizeof(struct node));
    printf("Enter the element to be inserted: ");
    scanf("%d", &data);
    temp->data = data;
    if (temp == NULL)
    {
        printf("Queue Overflow\n");
        exit(1);
    }
    if (front == NULL)
    {
        temp->next = NULL;
        front = temp;
        rear = temp;
    }
    else
    {
        rear->next = temp;
        rear = temp;
        rear->next = NULL;
    }
}
void dequeue()
{
    if (front == NULL)
    {
        printf("Queue Underflow\n");
        exit(1);
    }
    struct node *ptr;
    ptr = front;
    front = front->next;
    printf("Element deleted is: %d", ptr->data);
    free(ptr);
}
void display()
{
    struct node *ptr;
    ptr = front;
    if (front == NULL)
    {
        printf("Queue is empty!");
        exit(1);
    }
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}
void main()
{
    int choice, data;
    while (1)
    {
        printf("\n");
        printf("1. Enqueue(insert)\n");
        printf("2. Dequeue(delete)\n");
        printf("3. Print the last inserted element\n");
        printf("4. Print the first inserted element\n");
        printf("5. Print all the elements of the queue\n");
        printf("6. Quit\n");
        printf("Please enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enqueue(data);
            break;
        case 2:
            dequeue();
            break;
        case 5:
            display();
            break;

        default:
            printf("Wrong choice\n");
            break;
        }
    }
}