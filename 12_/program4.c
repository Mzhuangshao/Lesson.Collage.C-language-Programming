#include <stdio.h>
//斐波那契
int Fib(int numberA)
{
    if (numberA <= 2)
    {
        return 1;
    }
    return Fib(numberA - 1) + Fib(numberA - 2);
}

void main()
{
    
    int numberA, result;
    printf("Enter Number\n");
    scanf("%d", &numberA);
    result = Fib(numberA);
    printf("%4d",result);
}