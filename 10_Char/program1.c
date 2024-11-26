#include <stdio.h>
#include <string.h>

void main()
{
    char Char_1[CharSize];
    int len = sizeof(Char_1) / sizeof(Char_1[0]);
    int len_1 = sizeof(Char_1);
    int len_2 = sizeof(Char_1[0]);
    printf("Enter Numbers\n");
    for (int i = 0; i < len; i++)
    {
        scanf("%c", &Char_1[i]);
    }
    printf("你输入的字符串是:\n");
    for (int i = 0; i < len; i++)
        printf("%c ", Char_1[i]);
}