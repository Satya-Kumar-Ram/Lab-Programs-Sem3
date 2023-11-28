#include <stdio.h>
#include <conio.h>
int arraySort(int arr[], int size)
{
    int i, j, temp;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    return arr;
}
void main()
{
    int i, size, min, max;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];

    printf("Enter the elements :");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    arraySort(arr, size);
    min = arr[0];
    max = arr[size - 1];
    printf("Minimum number is: %d\n", min);
    printf("Maximum number is: %d\n", max);
}