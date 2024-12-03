#include <stdio.h>
long int factorial();

int main()
{
    int number;
    printf("输入一个整数: ");
    scanf("%d", &number);
    printf("%d! = %ld", number, factorial(number));
    return 0;
}
long int factorial(int number)
{
    if (number > 1)
        return number * factorial(number - 1);
    else if (number == 1)
        return 1;
    else
        return 0;
}