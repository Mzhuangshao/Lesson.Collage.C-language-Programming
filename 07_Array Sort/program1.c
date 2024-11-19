#include "stdio.h"

void main()
{
    int a[10];
    int b[5] = {55,44,33,22,11};
    for (int i=0; i<10; i++)
    {
        a[i] = i+1;
        printf("%4d",a[i]);
    }
    printf("\n");
    for (int i = 0; i<10; i++)
    {
        printf("%4d",b[i]);
    }
}