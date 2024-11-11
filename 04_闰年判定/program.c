#include <stdio.h>

void main(){
    int years;
    printf("Enter year\n");
    scanf_s("%d",&years);
    if((years % 4 == 0 && years & 100 !=0) || years % 400 == 0)
    {
        printf("%d is Leap Year\n",years);
    }
    else
    {
        printf("%d not Leap Year\n",years);
 
    }
}