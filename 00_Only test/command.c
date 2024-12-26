#include <stdio.h>

void main()
{
    int da = 8750;
    da = da % 10000;

    printf("\nda1 %d", da);
    printf("\n千 %d", da / 1000);       // 千位
    printf("\n百 %d", (da % 1000) / 100); // 百位
    printf("\n十 %d", (da % 100) / 10);   // 十位
    printf("\n个 %d", da % 10);         // 个位
}