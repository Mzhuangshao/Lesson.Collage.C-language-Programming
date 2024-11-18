#include <stdio.h>

void main()
{
    int arr[6][6];
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            arr[i][j] = (i + j) * (i + j);
            printf("%4d", arr[i][j]);
        }
        printf("\n");
    }
}