#include <stdio.h>

void main()
{
    int a, b, temp;
    int *point1 = &a;
    int *point2 = &b;
    printf("Enter : ");
    scanf("%d %d", point1, point2);
    printf("p1 %d , p2 %d\n", point1, point2);
    printf("p1 %d , p2 %d\n", *point1, *point2);
}
