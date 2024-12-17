#include <stdio.h>

int stringCopy();
int stringLen();
int stringConnect();

void main()
{
    char string1[100], string2[100], string3[100];
    printf("Enter: ");
    scanf("%s", &string1);

    printf("\nChar Length: %d\n", stringLen(string1));

    stringCopy(string1, string2);
    printf("\nstring1 : %s\nstring2 : %s\n", string1, string2);

    stringConnect(string1, string2, string3);
    printf("\nstring3: %s\n", string3);
}

int stringLen(char *string1)
{
    int len;
    for (len = 0; string1[len]; len++)
        ;
    return len;
}

int stringCopy(char *string1, char *string2)
{
    while (*string1 != '\0')
    {
        *string2 = *string1;
        string2++;
        string1++;
    }
}

int stringConnect(char *string1, char *string2, char *string3)
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