#include <stdio.h>
#include <math.h>

void main()
{
    
    int number = 0, count = 1, scanNumber;
    while (count<=100)
    {
        number = number+count;
        count++;
    }
    printf("The final number is %d",number);

}