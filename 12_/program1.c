#include <stdio.h>
// 斐波那契数列
void fib(int m)
{
    if (m == 1 || m == 2)
        printf("1");
    int a = 0, b = 1, aw = 1;
    while (m >= 2)
    {
        printf("%4d", aw);
        aw = aw + a;
        a = b;
        b = aw;
        m = m - 1;
    }
    printf("%4d", aw);
}

void main()
{
    int n;
    printf("Enter Count: \n");
    scanf("%d", &n);
    fib(n);
}