#include <stdio.h>
#include <string.h>

void main()
{
    char String1[] = "Today is Monday";
    char String2[] = "No Today";
    char String3[32];
    char String4[] = "上海自来水";
    //-------------
    int len1 = strlen(String1);
    printf("%s 长度为 %d\n", String1, len1);
    //-------------
    for (int len2 = 0; String2[len2]; len2++)
    {
        printf("%s 长度为 %d\n", String2, len2);
    }
    //-------------
    strcpy(String3, String1);
    strcat(String3, String2);
    int len3 = strlen(String3);
    printf("%s 长度为 %d\n", String3, len3);
    //-------------
//     for (int j = 0; String4[j]; j++)
//     {
//         j = j - 3;
//         for (int i = 0; String4[i] == String4[j - 1] && String4[i + 1] = String4[j] && i <= j; i = i + 2, j = j + 2);
//     }
//     puts(String4);
}