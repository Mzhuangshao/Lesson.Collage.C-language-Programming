#include <stdio.h>

void main(){
    int numA,numB,numC,numCache;
    printf("Swapping Number\n");
    printf("Enter the Number-A\n");
    scanf("%d",&numA);
    printf("Enter the Number-B\n");
    scanf("%d",&numB);
    printf("Enter the Number-C\n");
    scanf("%d",&numC);
    printf("Your Orginal Number-A is %d, Number-B is %d, Number-C is %d\n",numA,numB,numC);
    if(numA>numB)
    {
        numCache = numA;
        numA = numB;
        numB = numCache;
    }
    if(numA>numC)
    {
        numCache = numA;
        numA = numC;
        numC = numCache;
    }
    if(numB>numC)
    {
        numCache = numB;
        numB = numC;
        numC = numCache;
    }
    printf("Number-A is %d \nNumber-B is %d \nNumber-C is %d",numA,numB,numC);
}