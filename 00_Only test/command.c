#include <stdio.h>
#include <math.h>

void main()
{
    int number = 0;
    int count = 1;
    while (count<=100)
    {
        number = number+count;
        count++;
    }
    printf("The final number is %d",number);
}