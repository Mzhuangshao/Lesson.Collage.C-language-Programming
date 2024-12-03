#include <stdio.h>

int Comparing();

void main()
{
    int numberA, numberB, numberC, numberD, result;
    printf("Enter NumberA\n");
    scanf("%d", &numberA);
    printf("Enter NumberB\n");
    scanf("%d", &numberB);
    printf("Enter NumberC\n");
    scanf("%d", &numberC);
    printf("Enter NumberD\n");
    scanf("%d", &numberD);
    result = Comparing(numberA, numberB, numberC, numberD);
    printf("Maximum is %d", result);
}

int Comparing(int numberA, int numberB, int numberC, int numberD)
{
    // return (numberA > numberB) ? numberA : numberB;
    // return(numberA > numberB ? numberA : numberB) > numberC ? (numberA > numberB ? numberA : numberB) : numberC;
    return ((numberA > numberB ? numberA : numberB) > numberC ? (numberA > numberB ? numberA : numberB) : numberC) > numberD ? ((numberA > numberB ? numberA : numberB) > numberC ? (numberA > numberB ? numberA : numberB) : numberC) : numberD;
}