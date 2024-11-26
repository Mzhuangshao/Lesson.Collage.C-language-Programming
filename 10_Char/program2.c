#include <stdio.h>
#include <string.h>

void main()
{
    // char string_1[] = "I'm a student. \0what about you?\n\0";
    // char string_2[] = "I'm a \n\012\\student too.\"";
    // printf("%s\t%d\n",string_1,strlen(string_1));
    // printf("%s\t%d\n",string_2,strlen(string_2));
    char string_1[20] = "Marry";
    char string_2[] = "Xmas";
    printf("%s",strcat(string_1,string_2));
    puts(string_2);
}