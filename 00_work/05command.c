#include <stdio.h>

// 函数声明
void sort();    // 排序
void swap();    // 交换 由‘排序’调用


int main(void)
{
    int Array[10] = {};
    printf("Enter Numbers\n");
    for (int i = 0; i < 10; i++)
        scanf("%d", &Array[i]);  // 输入字符串
    
     // 排序
    sort(Array);
    for (int i = 0; i < 10; i++)
        printf("%d\t", Array[i]);
}

void sort(int Array[])
{
    for (int z = 0; z < 10 - 1; z++)
        for (int x = 0; x < 10 - 1 - z; x++)
            if (Array[x] > Array[x + 1])
                swap(&Array[x], &Array[x + 1]);
}

void swap(int *x, int *z)
{
    int temp = *x;
    *x = *z;
    *z = temp;
}