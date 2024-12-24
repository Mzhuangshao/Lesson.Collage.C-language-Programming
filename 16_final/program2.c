#include <stdio.h>
#include <string.h>
#include <math.h>

void Q1();

void main()
{
    Q1();
}

void Q1()
{
    int Array1[10], sum = 0, avg;
    printf("输入十个数\n");
    for (int i = 0; i < 10; i++) // 输入数组数字
        scanf("%d", &Array1[i]);
    for (int i = 0; i < 10; i++)
    {
        sum += Array1[i];
        avg = sum / 2;
    }
    printf("\n平均数是 %d", avg);
}
void Q2()
{
    
}