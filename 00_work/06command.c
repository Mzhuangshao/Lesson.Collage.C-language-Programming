#include <stdio.h>

// 函数声明
int stringCopy();       // 字符串复制
int stringLen();        // 求字符串长度
int stringConnect();    // 字符串首尾相连

void main()
{
    char string1[100], string2[100], string3[100];
    printf("Enter: ");
    scanf("%s", &string1);  // 输入字符串

    // 求字符串长度
    printf("\nChar Length: %d\n", stringLen(string1));

    // 字符串复制
    stringCopy(string1, string2);
    printf("\nstring1 : %s\nstring2 : %s\n", string1, string2);

    // 字符串首尾相连
    stringConnect(string1, string2, string3);
    printf("\nstring3: %s\n", string3);
}

int stringLen(char *string1)    // 求字符串长度
{
    int len;
    for (len = 0; string1[len]; len++)
        ;
    return len;
}

int stringCopy(char *string1, char *string2)    // 字符串复制
{
    while (*string1 != '\0')
    {
        *string2 = *string1;
        string2++;
        string1++;
    }
}

int stringConnect(char *string1, char *string2, char *string3)  // 字符串首尾相连
{
    while (*string1 != '\0')
    {
        *string3 = *string1;
        string1++;
        string3++;
    }
    while (*string2 != '\0')
    {
        *string3 = *string2;
        string2++;
        string3++;
    }
    *string3 = '\0';
}