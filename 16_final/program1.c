#include <stdio.h>

void Q1();
void Q2();
void Q4();
void Q5();
void Q6();
void Q7();
void Q8();

void main()
{
    printf("\n-------\n");
    Q1();
    printf("\n-------\n");
    Q2();
    printf("\n-------\n");
    Q4();
    printf("\n-------\n");
    Q5();
    printf("\n-------\n");
    Q6();
    printf("\n-------\n");
    Q7();
    printf("\n-------\n");
    Q8();
    printf("\n-------\n");
}

void Q1()
{
    printf("Hello, C!");
}
void Q2()
{
    int ScanNumber;
    printf("Enter Numbers: ");
    scanf("%d", &ScanNumber);
    printf("\nYour Enter is : %d", ScanNumber);
}

void Q4()
{
    float Fah, Cel;
    Cel = 5 * (Fah - 32) / 9.0;
    printf("\nEnter Value of Fahrenheit: ");
    scanf("%f", &Fah);
    printf("\nConvert to Fahrenheit is : %.2f", Cel);
}

void Q5()
{
    float r, h, pi = 3.14;
    printf("\nEnter Value r and h: ");
    scanf("%f %f", &r, &h);
    float Circumference, CircleArea, BallSurfaceArea, BallVolume, CylinderVolume;
    Circumference = 2 * pi * r;            // 圆周长
    CircleArea = r * r * pi;               // 圆面积
    BallSurfaceArea = 4 * pi * r * r;      // 球表面积
    BallVolume = 4 * pi * r * r * r / 3.0; // 球体积
    CylinderVolume = CircleArea * h;       // 圆柱体积
    // printf("\nEnter Value h: ");
    // scanf("%.2f", &h);
    printf("\n圆周长是%.2f  圆面积是%.2f  球表面积是%.2f  球体积是%.2f  圆柱体积是%.2f  ", Circumference, CircleArea, BallSurfaceArea, BallVolume, CylinderVolume);
}
void Q6()
{
    int a = 3, b = 4, c = 5;
    float x = 1.2, y = 2.4, z = -3.6;
    long u = 51241, n = 128765;
    char c1 = 'a', c2 = 'b';
    int ac1 = c1, ac2 = c2;
    printf("a= %d  b= %d  c= %d\n", a, b, c);
    printf("x=%.6f,y=%.6f,z=%.6f\n", x, y, z);
    printf("x+y= %.2f  y+z=%.2f  z+x=%.2f\n", x + y, y + z, z + x);
    printf("u= %d  n=   %d\n", u, n);
    printf("c1=\'%c\' or %d\n", c1, ac1);
    printf("c2=\'%c\' or %d\n", c2, ac2);
}
void Q7()
{
    printf("*****\n");
    printf("*    \n");
    printf("*    \n");
    printf("*****\n");
}
void Q8()
{
    int ScanNumber, yes5, yes7, temp;
    yes5 = ScanNumber / 5;
    yes7 = ScanNumber / 7;
    printf("Enter Numbers: ");
    scanf("%d", &ScanNumber);
}