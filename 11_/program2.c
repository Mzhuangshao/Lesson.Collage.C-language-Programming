#include <stdio.h>

int Comparing();

void main()
{
    int numberA, numberB, numberC, result;
    printf("Enter NumberA\n");
    scanf("%d", &numberA);
    printf("Enter NumberB\n");
    scanf("%d", &numberB);
    printf("Enter NumberC\n");
    scanf("%d", &numberC);
    result = Comparing(numberA, numberB, numberC);
    printf("Maximum is %d", result);
}

int Comparing(int numberA, int numberB, int numberC)
{
    //return (numberA > numberB) ? numberA : numberB;
    return(numberA > numberB ? numberA : numberB) > numberC ? (numberA > numberB ? numberA : numberB) : numberC;
}