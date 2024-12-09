#include <stdio.h>

void swap();
void selection_sort();

void main()
{
    int ArraySize;
    printf("Enter the count\n");
    scanf("%d", &ArraySize);
    int arr[ArraySize] = {};
    printf("Enter Numbers\n");
    for (int i = 0; i < ArraySize; i++)
        scanf("%d", &arr[i]);
    int len = sizeof(arr) / sizeof(arr[0]);
    selection_sort(arr, len);
    for (int i = 0; i < len; i++)
        printf("%5d", arr[i]);
}

void swap(int *a, int *b) // 交換兩個變數
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selection_sort(int arr[], int len)
{
    int i, j;
    for (i = 0; i < len - 1; i++)
    {
        int min = i;
        for (j = i + 1; j < len; j++) // 走訪未排序的元素
            if (arr[j] < arr[min])    // 找到目前最小值
                min = j;              // 紀錄最小值
        swap(&arr[min], &arr[i]);     // 做交換
    }
}