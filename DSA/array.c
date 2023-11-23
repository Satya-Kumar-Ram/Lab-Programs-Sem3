#include <stdio.h>
#include <conio.h>
void main()
{
    int arr[5], i, count = 10;
    for (i = 0; i < 5; i++)
    {
        arr[i] = count;
        count++;
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }
}