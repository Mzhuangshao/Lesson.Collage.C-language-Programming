#include <stdio.h>

void main()
{
    double score[8][6] = {
        {78, 36, 28, 65, 90, 89},
        {100, 90, 34, 56, 87, 76},
        {90, 92, 99, 87, 98, 86},
        {87, 77, 88, 99, 76, 66},
        {65, 78, 64, 74, 86, 95}};
    printf("学号\t 语文\t 数学\t 英语\t 物理\t 化学\t 音乐\t 平均分\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            score[i][5] += score[i][j];
        }
        score[i][5] = score[i][5] / 5;
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            score[5][j] += score[i][j];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (score[6][j] < score[i][j])
            {
                score[6][j] = score[i][j];
                score[7][j] = i + 1;
            }
        }
    }
    for (int i = 0; i < 8; i++)
    {
        if (i<5)
        {
            printf("NO.%d\t",i+1);
        }
        else if (i==5)
        {
            printf("总分\t");
        }
        else if (i==6)
        {
            printf("最高分\t");
        }
        else if (i==7)
        {
            printf("学号\t");
        }
        for (int j = 0; j < 6; j++)
        {
            if(!(j==5&&(i==5||i==6||i==7)))
            {
                printf("%.2lf\t",score[i][j]);
            }
        }
        printf("\n");
    }
}