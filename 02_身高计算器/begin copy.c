#include <stdio.h>
#include <math.h>
void main()
{
double gh,bh,fh,mh;

scanf("fh=%lf,mh=%lf",&fh,&mh);
bh = ((fh+mh)*1.08/2);
gh = ((fh+0.923*mh)/2);

printf("bh=%.2lf,gh=%.2lf\n",bh,gh);



}