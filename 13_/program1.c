#include <stdio.h>
int x1 = 30, x2 = 40;
void swap(int x, int y)
{
    x1 = x;
    x = y;
    y = x1;
}

void main()
{
    int x3 = 10, x4 = 20;
    printf("%d %d %d %d\n", x1, x2, x3, x4);
    swap(x3, x4);
    printf("%d %d %d %d\n", x1, x2, x3, x4);
    swap(x1, x2);
    printf("%d %d %d %d\n", x1, x2, x3, x4);
}