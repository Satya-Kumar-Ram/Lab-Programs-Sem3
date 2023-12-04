#include <stdio.h>
#include <stdlib.h>
#define MAX 4
int queue[MAX], front = -1, rear = -1;
int isFull()
{
    if (rear == MAX - 1)
    {

        return 1;
    }
    return 0;
}
int isEmpty()
{
    if (front == -1 || front > rear)
    {
        return 1;
    }
    return 0;
}
void enqueue(int data)
{
    if (isFull())
    {
        printf("Queue Overflow\n");
        return;
    }
    if (front == -1)
    {
        front = 0;
    }
    rear++;
    queue[rear] = data;
}
int dequeue()
{
    int value;
    if (isEmpty())
    {
        printf("Queue Underflow\n");
        exit(1);
    }
    value = queue[front];
    front++;
    return value;
}
void print()
{
    int i;
    if (isEmpty())
    {
        printf("Queue is empty!");
        return;
    }
    printf("Elements are: ");
    for (i = front; i <= rear; i++)
    {
        printf("%d ", queue[i]);
    }
}
void peek_last()
{

    if (isEmpty())
    {
        printf("Queue Underflow\n");
        return;
    }

    printf("The last inserted element is: %d", queue[rear]);
}
void peek_first()
{
    if (isEmpty())
    {
        printf("Queue Underflow\n");
        return;
    }
    printf("The first inserted element is: %d", queue[front]);
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
            printf("Enter the element to be inserted: ");
            scanf("%d", &data);
            enqueue(data);
            break;
        case 2:
            data = dequeue();
            printf("Deleted element is: %d", data);
            break;
        case 3:
            peek_last();
            break;
        case 4:
            peek_first();
            break;
        case 5:
            print();
            break;
        case 6:
            exit(1);
            break;

        default:
            printf("Wrong choice\n");
            break;
        }
    }
}