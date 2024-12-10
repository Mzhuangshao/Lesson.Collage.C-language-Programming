#include <stdio.h>

int A;

void main()
{
    extern int power(int n);
    int b = 3, c, d, m;
    printf("Enter A , m : ");
    scanf("%d %d", &A, &m);
    c = A * b;
    printf("\n%d * %d = %d\n", A, b, c);
    d = power(m);
    printf("%d * %d = %d", A, m, d);
}

int power(int n)
{
    int i,y = 1;
    for (i = 1; i <= n; i++)
    {
        y * A;
    }
    return y;
}
