#include <stdio.h>

void main()
{
    int peach[10] = {1};
    for (int count = 1; count <= 10; count++)
    {
        peach[count] = (peach[count - 1] + 1) * 2;
    }
    for (int day = 10; day >= 1; day--)
    {
        printf("第%d天有%d个桃子\n", day, peach[day - 1]);
    }
}