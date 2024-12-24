#include <stdio.h>
#include <string.h>
#include <math.h>

void Q1();
void Q2();
void Q4();
void Q5();
void Q6();
void Q7();
void Q8();
void Q9();
void Q10();
void Q11();
void Q12();
void Q13();
void Q14();
void Q15();
void Q16();
void Q17();
void Q18();
void Q19();

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
    Q9();
    printf("\n-------\n");
    Q10();
    printf("\n-------\n");
    Q11();
    printf("\n-------\n");
    Q12();
    printf("\n-------\n");
    Q13();
    printf("\n-------\n");
    Q14();
    printf("\n-------\n");
    Q15();
    printf("\n-------\n");
    Q16();
    printf("\n-------\n");
}

void Q1()
{
    printf("Hello, C!");
}
void Q2()
{
    int ScanNumber;
    printf("输入一个数: ");
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
    int ScanNumber, y1 = 0, y2 = 0;
    printf("(5和7倍数判断)输入一个数 ");
    scanf("%d", &ScanNumber);
    int x1 = ScanNumber % 5, x2 = ScanNumber % 7;
    if (x1 == 0 && x2 == 0)
        printf("\n这个数是5和7的倍数");
    else
        printf("\nNO");
}

void Q9()
{
    char a, b, c;
    printf("输入一个字母:");
    scanf("%c", &a);
    if (a >= 'a' && a <= 'z')
    {
        b = a - 32;
        printf("%c", b);
    }
    else
    {
        c = a + 32;
        printf("%c", c);
    }
}

void Q10()
{
    char ScanString[255], a[] = "sunny", b[] = "rainy";
    printf("sunny or rainy ");
    gets(ScanString);
    int result1 = strcmp(ScanString, a);
    int result2 = strcmp(ScanString, b);
    if (result1 == 0)
        printf("\nplay");
    else
    {
        if (result2 == 0)
            printf("\nno play");
        else
            printf("\nbad");
    }
}

void Q11()
{
    int ScanNumber;
    printf("输入一个星期数: ");
    scanf("%d", &ScanNumber);
    switch (ScanNumber)
    {
    case 1:
        printf("今天是星期一");
        break;
    case 2:
        printf("今天是星期二");
        break;
    case 3:
        printf("今天是星期三");
        break;
    case 4:
        printf("今天是星期四");
        break;
    case 5:
        printf("今天是星期五");
        break;
    case 6:
        printf("今天是星期六");
        break;
    case 7:
        printf("今天是星期日");
        break;
    default:
        printf("不在有效范围内");
        break;
    }
}

void Q12()
{
    int result = 0;
    for (int i = 1; i <= 4; i++)
        for (int j = 1; j <= 4; j++)
            for (int k = 1; k <= 4; k++)
                if ((i != j) && (j != k) && (i != k))
                {
                    result = i * 100 + j * 10 + k;
                    printf("%10d", result);
                }
}

void Q13()
{
    int count, number, scanNumber, space;
    printf("输入层数\n");
    scanf("%d", &scanNumber);
    for (count = 0; count <= scanNumber; count++)
    {
        for (space = 1; space <= scanNumber - count; space++)
            printf(" ");
        for (number = 0; number <= count; number++)
            printf(" *");
        printf("\n");
    }
}

void Q14()
{
    int ScanNumber, sum = 0, i = 1;
    printf("1到N所有奇数和\nEnter Number:");
    scanf("%d", &ScanNumber);
    if (ScanNumber <= -1)
        printf("\nWrong Number");
    else
    {
        do
        {
            if (i % 2 != 0)
                sum += i;
            i++;
        } while (i <= ScanNumber);
        printf("\n%d", sum);
    }
}

void Q15()
{
    int ScanNumber, sum = 1;
    printf("1到N所有整数平方和Enter Number: \n");
    scanf("%d", &ScanNumber);
    while (ScanNumber)
    {
        if (ScanNumber > 1)
            sum += pow(ScanNumber, 2);
        ScanNumber--;
    }
    printf("\n%d", sum);
}

void Q16()
{
    int ScanNumber, OddNum = 0, EvenNum = 0, i = 1, j = 1, OddS = 0, EvenS = 0;
    printf("1到N所有奇数平方和 所有偶数立方和Enter Number: \n");
    scanf("%d", &ScanNumber);
    if (ScanNumber <= -1)
        printf("Wrong Number");
    else
    {
        while (i <= ScanNumber)
        {
            if (i % 2 != 0)        // 判断i是否为奇数
                OddS += pow(i, 2); // 平方运算
            i++;
        }
        printf("\nOdds %d", OddS);
        while (j <= ScanNumber)
        {
            if (j % 2 == 0)         // 判断j是否为偶数
                EvenS += pow(j, 3); // 立方运算
            j++;
        }
        printf("\nevens %d", EvenS);
    }
}
