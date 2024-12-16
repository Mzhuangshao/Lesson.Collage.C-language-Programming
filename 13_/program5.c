#include <stdio.h>

static double score[8][6] = {
    {78, 76, 82, 75, 90},
    {100, 90, 74, 76, 87},
    {90, 92, 97, 87, 98},
    {87, 77, 88, 96, 76},
    {85, 78, 84, 74, 86}};

void agv();          // 平均分
void total_score();  // 总分
void max_score();    // 最高分
void display_list(); // 显示

void main()
{
    agv(score);
    total_score(score);
    max_score(score);
    display_list(score);
}

void agv(double score[8][6])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            score[i][5] += score[i][j];
        }
        score[i][5] = score[i][5] / 5;
    }
}

void total_score(double score[8][6])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            score[5][j] += score[i][j];
        }
    }
}

void max_score(double score[8][6])
{
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
}

void display_list(double score[8][6])
{
    printf("学号\t 语文\t 数学\t 英语\t 物理\t 化学\t 平均分\n");
    for (int i = 0; i < 8; i++)
    {
        if (i < 5)
        {
            printf("NO.%d\t", i + 1);
        }
        else if (i == 5)
        {
            printf("总分\t");
        }
        else if (i == 6)
        {
            printf("最高分\t");
        }
        else if (i == 7)
        {
            printf("学号\t");
        }
        for (int j = 0; j < 6; j++)
        {
            if (!(j == 5 && (i == 5 || i == 6 || i == 7)))
            {
                printf("%.2lf\t", score[i][j]);
            }
        }
        printf("\n");
    }
}
