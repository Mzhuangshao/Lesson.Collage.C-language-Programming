#include <stdio.h>

int Comparing();

void main()
{
    int numberA, numberB, result;
    printf("Enter NumberA\n");
    scanf("%d", &numberA);
    printf("Enter NumberB\n");
    scanf("%d", &numberB);
    result = Comparing(numberA, numberB);
    printf("Maximum is %d", result);
}

int Comparing(int numberA, int numberB)
{
    return (numberA > numberB) ? numberA : numberB;
}
