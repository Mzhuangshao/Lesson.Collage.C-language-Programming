#include<stdio.h>
 
void main()
{
    int n[10];
    n[9] = 1;
    int i = 1;
    for (int j = 8; j >= 0;j --)
    {
        i ++;
        i = i * 2;
        n[j] = i;

    }
    printf("第1天%d\n",n[0]);
    printf("第2天%d\n",n[1]);
    printf("第3天%d\n",n[2]);
    printf("第4天%d\n",n[3]);
    printf("第5天%d\n",n[4]);
    printf("第6天%d\n",n[5]);
    printf("第7天%d\n",n[6]);
    printf("第8天%d\n",n[7]);
    printf("第9天%d\n",n[8]);
    printf("第10天%d\n",n[9]);
}