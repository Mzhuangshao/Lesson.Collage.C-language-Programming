#include <stdio.h>


void display(int array[3][3],int len)
{
    int *point;
    for (point = array[0]; point - array[0] < 9; point++)
    {
        printf("%d ", *point);
        if ((point - array[0] + 1) % 3 == 0)
            printf("\n");
    }
}

void main()
{
    int array[3][3] = {{22, 33, 5}, {66, 99, 7}, {9, 8, 233}};
    int len = sizeof(array) / sizeof(array[0]);
    display(array,len);
}