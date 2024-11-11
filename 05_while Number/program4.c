#include <stdio.h>
#include <math.h>

void main()
{
    int numberA = 0, numberB = 1, numberC, count, scanNumber;
    printf("Enter Count : ");
    scanf("%d",&scanNumber);
    for(count = 1; count <= scanNumber; count++)
    {   
        numberC = numberA+numberB;
        numberA = numberB;
        numberB = numberC;
        printf("count %d - numberA %d - numberB %d - numberC %d\n",count,numberA,numberB,numberC);
    }
    
    //printf("FBNQ %d = %d",scanNumber,numberA);
}