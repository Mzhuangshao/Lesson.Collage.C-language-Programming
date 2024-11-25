#include <stdio.h>
void main()
{
    int ArraySize;
    printf("输入数组大小\n");
    scanf("%d", &ArraySize);                    //输入数组总数 / 数组大小
    int Array_1[ArraySize] = {};
    printf("输入数字\n");
    for (int i = 0; i < ArraySize; i++)         //输入数组数字
        scanf("%d", &Array_1[i]);
    printf("原始数组是:\n");
    for (int i = 0; i < ArraySize; i++)
        printf("%d ", Array_1[i]);
    for (int i = 0; i < ArraySize / 2; i++)     //对数组排序，对半分开，将头尾进行交换
    {
        int temp = Array_1[i];
        Array_1[i] = Array_1[ArraySize - 1 - i];
        Array_1[ArraySize - 1 - i] = temp;
    }
    printf("\n排序后的数组:\n");
    for (int i = 0; i < ArraySize; i++)
        printf("%d ", Array_1[i]);
    printf("\n");
}