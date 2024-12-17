#include <stdio.h>

int strcopy(char *string1, char *string2)
{
    while (*string1 != '\0')
    {
        *string2 = *string1;
        string2++;
        string1++;
    }
}

void main()
{
    char string1[100], string2[100];
    printf("Enter: ");
    scanf("%s", &string1);
    strcopy(string1, string2);
    printf("\n");
    printf("string1 : %s\n", string1);
    printf("string2 : %s\n", string2);
}