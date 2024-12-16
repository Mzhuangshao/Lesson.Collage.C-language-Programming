#include <stdio.h>
#include <stdlib.h>

void main()
{
    int array[10], i, *point;
    printf("下标法: \n");
    for (int i = 0; i < 10; i++)
    {
        array[i] = (int)rand() % 100;
        printf("%d ", array[i]);
    }
    printf("\n数组法: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", *(array + i));
    }

    printf("\n指针变量: \n");
    for (point = array; point - array < 10; point++)
    {
        printf("%d\t ", *point);
    }
}