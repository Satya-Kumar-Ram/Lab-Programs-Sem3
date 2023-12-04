#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} *Top = NULL;
void push(int data)
{
    struct node *newnode = malloc(sizeof(struct node));
    if (newnode == NULL)
    {
        printf("Stack Overflow. ");
        exit(1);
    }
    newnode->data = data;
    newnode->next = NULL;

    newnode->next = Top;
    Top = newnode;
}
void print()
{
    struct node *temp;
    temp = Top;
    if (isEmpty())
    {
        printf("Stack Underflow. ");
        exit(1);
    }
    printf("The Stack elements are: ");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
int pop()
{
    int val;
    struct node *temp;
    temp = Top;
    if (isEmpty())
    {
        printf("Stack Underflow. ");
        exit(1);
    }
    val = temp->data;

    Top = Top->next;
    free(temp);
    temp = NULL;
    return val;
}
int isEmpty()
{
    if (Top == NULL)
        return 1;
    else
        return 0;
}
int peek()
{
    if (isEmpty())
    {
        printf("Stack Underflow. ");
        exit(1);
    }
    return Top->data;
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
            printf("The topmost element of the stack is: %d\n", peek());
            break;
        case 4:
            print();
            break;
        case 5:
            exit(1);
        default:
            printf("Wrong choice\n");
        }
    }
}
