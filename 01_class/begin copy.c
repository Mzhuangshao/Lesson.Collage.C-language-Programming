#include <stdio.h>
#include <math.h>
void main()
{
    /*
    int number = 0;
    int count = 0;
    int i;
    printf("Calculating: 1+2+3+...+100: ");
    for (i = 0; i <= 100; i++)
    {
        number = number + count;
        count = count + 1;
        printf("\nAdded number: %d",number);
    }
    printf("\nThe final number is: %d ",number);
//     */
//    char c = 'boy';
//    printf("%d",c);

double gh,bh,fh,mh;

scanf("fh=%lf,mh=%lf",&fh,&mh);
bh = ((fh+mh)*1.08/2);
gh = ((fh+0.923*mh)/2);

printf("bh=%.2lf,gh=%.2lf\n",bh,gh);



}