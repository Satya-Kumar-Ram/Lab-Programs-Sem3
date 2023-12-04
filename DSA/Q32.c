#include <stdio.h>
#include <conio.h>
void main()
{
    int arr[] = {23, 10, 9, 5, 2}, i, j, temp;
    int arr_size;
    arr_size = sizeof(arr) / sizeof(arr[0]);
    for (i = 0; i < arr_size; i++)
    {
        for (j = 0; j < arr_size - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Array after sorting is: ");
    for (i = 0; i < arr_size; i++)
    {
        printf("%d ", arr[i]);
    }
}