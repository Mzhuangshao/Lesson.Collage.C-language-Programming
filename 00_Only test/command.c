#include <stdio.h>

void main()

{
    int count, number, scanNumber;
    printf("Enter Number\n");
    scanf("%d",&scanNumber);
    for(count = 0; count <= scanNumber; count ++)
    {
        for(number = 0; number <= count; number ++)
        {
            printf("*");
        }
        printf("\n");
    }
}