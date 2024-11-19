#include <stdio.h>

void main()
{
    int peach[10] = {1};
    // 定义数组peach，长度为10，用于储存桃子数量，将数组peach下标位置为9的数据设定位1，意为题目中“最后一天剩余一个桃子”
    int peach_eat[10];  // 定义数组peach_eat，长度为10，用于存储每天吃了几个桃子
    for (int count = 1; count <= 10; count++)
    {
        peach[count] = (peach[count - 1] + 1) * 2;        //将桃子数量+1后*2，再按顺序写入数组peach
        peach_eat[count] = peach[count] - peach[count+1]; //从peach数组中取两位互减，写入到数组peach_eat，意为吃了多少桃子
    }
    for (int day = 10; day >= 1; day--)
    {
        printf("第%d天有%d个桃子\n", day, peach[day - 1]);   //每天有多少个桃子
    }
    for (int day = 9; day >= 2; day--)
    {
        printf("第%d天吃了%d个桃子\n", day, peach_eat[day -1]);//每天吃了多少个桃子
    }
}