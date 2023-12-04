#include <stdio.h>
#include <stdlib.h>
void main()
{
    int arr[10], n, want, i;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element you want to search: ");
    scanf("%d", &want);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == want)
        {
            printf("Your element has found at %d index", i);
            exit(1);
        }
    }

    printf("Your element has not found");
}