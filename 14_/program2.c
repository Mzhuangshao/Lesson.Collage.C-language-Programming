#include <stdio.h>

void main()
{
    int array[5] = {5, 4, 3, 2, 1};
    int *point;
    int len = sizeof(array) / sizeof(array[0]);
    int sum = 0;
    for (point = array; point - array < len; point++)
    {
        sum += *point;
    }
    printf("%d", sum);
}