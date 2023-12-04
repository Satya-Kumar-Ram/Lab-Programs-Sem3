#include <stdio.h>
#define MAX 4

int arr[MAX];
int Top = -1;

int isEmpty()
{
    if (Top == -1)
    {
        return 1;
    }
    return 0;
}
int isFull()
{
    if (Top == MAX - 1)
    {
        return 1;
    }
    return 0;
}
void push(int data)
{
    if (isFull())
    {
        printf("Stack Overflow\n");
        return;
    }
    Top = Top + 1;
    arr[Top] = data;
}
int pop()
{
    int value;
    if (isEmpty())
    {
        printf("Stack Underflow\n");
        exit(1);
    }

    value = arr[Top];
    Top = Top - 1;
    return value;
}
int peek()
{
    if (isEmpty())
    {
        printf("Stack Underflow\n");
        exit(1);
    }
    return arr[Top];
}
void print()
{
    int i;
    if (Top == -1)
    {
        printf("Stack Underflow\n");
        return;
    }
    for (i = Top; i >= 0; i--)
    {
        printf("%d\n", arr[i]);
    }
    printf("\n");
}
void main()
{
    int choice, data;
    while (1)
    {
        printf("\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Print the top element\n");
        printf("4. Print all the elements of the stack\n");
        printf("5. Quit\n");
        printf("Please enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the element to be pushed: ");
            scanf("%d", &data);
            push(data);
            break;
        case 2:
            data = pop();
            printf("Deleted element is %d\n", data);
            break;
        case 3:
            printf("The topmost element of the stack is: %d", peek());
            break;
        case 4:
            print();
            break;
        case 5:
            exit(1);
            break;
        default:
            printf("Wrong choice\n");
        }
    }
}