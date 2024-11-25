#include <stdio.h>
void main()
{
    int ArraySize;
    printf("Enter the count\n");
    scanf("%d", &ArraySize);
    int Array_1[ArraySize] = {};
    printf("Enter Numbers\n");
    for (int i = 0; i < ArraySize; i++)
    {
        scanf("%d", &Array_1[i]);
    }
    printf("原始数组是:\n");
    for (int i = 0; i < ArraySize; i++)
        printf("%d ", Array_1[i]);
    printf("\n排序后的数组:\n");
    for (int i = ArraySize - 1; i >= 0; i--)
        printf("%d ", Array_1[i]);
    printf("\n");
}