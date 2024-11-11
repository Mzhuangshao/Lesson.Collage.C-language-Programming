#include<stdio.h>
 
void main()
{
    int peach[10];                  //定义数组peach，长度为10，用于储存桃子数量
    peach[9] = 1;                   //将数组peach下标位置为9的数据设定位1，意为题目中“最后一天剩余一个桃子”
    for (int count=1, number=8; number >= 0; number --)
    {
        count ++;                   //桃子数量+1
        count = count * 2;          //桃子数量乘2
        peach[number] = count;      //将桃子数量写入数组
    }
    for (int day=1, count=0; day <= 10; day++)             //计算天数和读取数组peach中哪个位置的数据
    {
        printf("第%d天有%d个桃子\n", day, peach[count]);    //打印内容“第几天有几个桃子”
        count++;                                           //定义在数组peach中读取对应位置的数据（即桃子数量）
    }
    
    
    /*
    printf("第1天%d\n",n[0]);
    printf("第2天%d\n",n[1]);
    printf("第3天%d\n",n[2]);
    printf("第4天%d\n",n[3]);
    printf("第5天%d\n",n[4]);
    printf("第6天%d\n",n[5]);
    printf("第7天%d\n",n[6]);
    printf("第8天%d\n",n[7]);
    printf("第9天%d\n",n[8]);
    printf("第10天%d\n",n[9]);*/
}