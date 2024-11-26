#include <stdio.h>
void bubble_sort(int Array_1[], int len)
{
    int x, z, temp;
    for (z = 0; z < len - 1; z++)
        for (x = 0; x < len - 1 - z; x++)
            if (Array_1[x] < Array_1[x + 1])
            {
                temp = Array_1[x + 1];
                Array_1[x + 1] = Array_1[x];
                Array_1[x] = temp;
            }
}
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
    int len = sizeof(Array_1) / sizeof(Array_1[0]);
    int len_1 = sizeof(Array_1);
    int len_2 = sizeof(Array_1[0]);
    printf("len_1 = %d\n", len_1);
    printf("len_2 = %d\n", len_2);
    printf("len = %d\n", len);
    bubble_sort(Array_1, len);
    for (int i = 0; i < len; i++)
        printf("%d   ", Array_1[i]);
}