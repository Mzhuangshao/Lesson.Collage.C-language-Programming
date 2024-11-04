#include <stdio.h>
#include <math.h>

void main()
{
    
    int number = 0, count = 1, scanNumber;
   printf("Enter Number\n");
   scanf("%d",&scanNumber);
   do
   {
        number = number+count;
        count++;
        printf("count %d --- number %d\n",count,number);
   }
   while (count <= scanNumber);
   //printf("Final number is %d",number);
   printf("1+2+3+..+%d = %d",scanNumber,number);
}