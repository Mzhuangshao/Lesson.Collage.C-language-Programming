#include <stdio.h>

void main()
{
    int var_ = 10;
    int *p; // 定义指针变量
    p = &var_;

    printf("var_ 变量的地址： %p\n", p);
    printf("var_ 变量的值： %d\n", p - 1);
}