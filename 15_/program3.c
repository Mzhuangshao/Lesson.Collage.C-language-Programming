#include <stdio.h>

int stringlen(char *string1)
{
    int len;
    for (len = 0; string1[len]; len++);
        return len;
}

void main()
{
    char string1[] = "Mine";
    int len = stringlen(string1);
    printf("%d\n", len);
}