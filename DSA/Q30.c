#include <stdio.h>
#include <stdlib.h>
#define Max 3
int queue[Max], front = -1, rear = -1;
int isEmpty()
{
    if (front == -1 && rear == -1)
    {
        return 1;
    }
    return 0;
}
int isFull()
{
    if ((rear + 1) % Max == front)
    {
        return 1;
    }
    return 0;
}
void enqueue(int data)
{
    if (isEmpty())
    {
        front = 0,
        rear = 0;
        queue[rear] = data;
    }
    else if (isFull())
    {
        printf("Queue Overflow\n");
    }
    else
    {
        rear = (rear + 1) % Max; // rear incremented
        queue[rear] = data;
    }
}
int dequeue()
{
    if (isEmpty())
    {
        printf("Queue Underflow\n");
    }
    else if (front == rear) // checking whether one element present or not
    {
        printf("\nDequeued element is: %d", queue[front]);
        front = -1;
        rear = -1;
    }
    else
    {
        printf("\nDequeued element is: %d", queue[front]);
        front = (front + 1) % Max;
    }
}
void display()
{
    int i;
    if (isEmpty())
    {
        printf("Queue is empty!\n");
    }
    else
    {
        printf("\nElements are: ");
        for (i = front; i != rear; i = (i + 1) % Max)
        {
            printf("%d ", queue[i]);
        }
        printf("%d ", queue[i]);
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
        printf("3. Print all the elements of the queue\n");
        printf("4. Quit\n");
        printf("Please enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the data to be inserted: ");
            scanf("%d", &data);
            enqueue(data);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(1);
            break;
        default:
            printf("Wrong choice\n");
            break;
        }
    }
}