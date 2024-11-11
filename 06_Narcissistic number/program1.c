#include "stdio.h"

void main()
{
    int i,j,k,n,scanNumber;
    printf("请输入最大值\n");
    scanf("%d",&scanNumber);
    //printf("%d 内的水仙花数有:",scanNumber);
    for(; scanNumber > 0; scanNumber--)
    {
        i =  scanNumber/100;        /*分解出百位*/
        j =  scanNumber/10%10;      /*分解出十位*/
        k =  scanNumber%10;         /*分解出个位*/
       //99printf("百%d 十%d 个%d\n",i,j,k);

        if(i*100+j*10+k==i*i*i+j*j*j+k*k*k)
        printf("%-5d\n",scanNumber);
    }
}
