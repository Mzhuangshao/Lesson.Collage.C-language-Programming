#include <stdio.h>
#include <math.h>

void main()
{
    int number = 0, count, scanNumber;
   printf("Enter Number : ");
   scanf("%d",&scanNumber);
   for (count = 1; count <= scanNumber; count++)
   {
        number = number+count;
        //printf("count %d --- number %d\n",count,number);
   }
   
   printf("1+2+3+..+%d = %d",scanNumber,number);
}