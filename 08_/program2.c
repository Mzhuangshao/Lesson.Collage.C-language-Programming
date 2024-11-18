#include <stdio.h>
void bubble_sort(int arr[], int len)
{
    int i, j, temp;
    for (i = 0; i < len - 1; i++)
        for (j = 0; j < len - 1 - i; j++)
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
}
void main()
{
    int ArraySize;
    printf("Enter the count\n");
    scanf("%d", &ArraySize);
    int arr[ArraySize] = {};
    printf("Enter Numbers\n");
    for (int i = 0; i < ArraySize; i++)
    {
        scanf("%d", &arr[i]);
    }
    int len = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr, len);
    int i;
    for (i = 0; i < len; i++)
        printf("%5d", arr[i]);
}