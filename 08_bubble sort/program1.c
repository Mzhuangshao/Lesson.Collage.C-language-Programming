#include <stdio.h>

void main()
{
    int Array[6][6];
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            Array[i][j] = (i + j) * (i + j);
            printf("%4d", Array[i][j]);
        }
        printf("\n");
    }
}