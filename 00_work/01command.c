//显示梯形
#include <stdio.h>

void main()
{
    int count, number, scanNumber,space;
    printf("Enter Number\n");
    scanf("%d",&scanNumber);
    for(count = 0; count <= scanNumber; count ++)
    {
        for (space = 1; space <= scanNumber - count; space++)
            printf(" ");
        for(number = 0; number <= count; number ++)
            printf(" *");
        printf("\n");
    }
}