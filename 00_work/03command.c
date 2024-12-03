#include <stdio.h>
#include <string.h>
void main()
{
    char String1[255];
    char String2[255];
    gets(String1);
    printf("你刚刚输入的是: ");
    puts(String1);
    gets(String2);
    printf("你刚刚输入的是: ");
    puts(String2);
    int result = strcmp(String1, String2);
    if (result == 0)
    {
        printf("\n字符串一 %s 与 字符串二 %s 相同", String1, String2);
    }
    if (result < 0)
    {
        printf("\n字符串一 %s 比 字符串二 %s 小", String1, String2);
    }
    if (result > 0)
    {
        printf("\n字符串一 %s 比 字符串二 %s 大", String1, String2);
    }
}