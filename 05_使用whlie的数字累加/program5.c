#include <stdio.h>
#include <math.h>

void main()
{
    int number,scanNumber;
    printf("Enter Number : ");
    scanf("%d",&scanNumber);
    for(number=2;number<=scanNumber;number++)
    {
        int i;
        for(i = 2; i < number; i++)
        {
            if(number%i == 0)
            {
                break;
            }
        }
        if(i == number)
        {
            printf("%8d",number);
        }
    }
}