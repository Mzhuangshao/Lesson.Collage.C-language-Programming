#include <stdio.h>
#include <string.h>
#include <math.h>

void Q1();
void Q2();
void Q3();
void Q4();
void Q5();
void Q6();
void Q7();
void Q6_1(char string[]);

void main()
{
    // Q1();
    Q7();
}

void Q1()
{
    int Array1[10], sum = 0, avg;
    printf("输入十个数\n");
    for (int i = 0; i < 10; i++) // 输入数组数字
        scanf("%d", &Array1[i]);
    for (int i = 0; i < 10; i++)
    {
        sum += Array1[i];
        avg = sum / 2;
    }
    printf("\n平均数是 %d", avg);
}
void Q2()
{
    int table[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int i, num = 0;
    for (i = 0; i < 3; i++)
        num = num + table[i][i];
    printf("%4d", num);
}
void Q3()
{

    int table[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int i, j, num = 0;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 4; j++)
            num += table[i][j];
    printf("%d", num);
}
void Q4()
{
    char table[15] = "Hello,World!";
    int count = 0;
    for (int i = 0; i < 15; i++)
        if (table[i] == 'l')
            count++;
    printf("l 有 %d 个", count);
}
void Q5()
{
    int array[5] = {10};
    for (int i = 1; i < 5; i++)
    {
        array[i] = array[i - 1] + 2;
    }
    printf("第五个人的年龄是 %d 岁", array[4]);
}

void Q6()
{
    char string[255];
    gets(string);
    Q6_1(string);
    puts(string);
}

void Q6_1(char string[]) // sort
{
    int len = strlen(string);
    for (int i = 0; i < len / 2; i++)
    {
        int temp = string[i];
        string[i] = string[len - 1 - i];
        string[len - 1 - i] = temp;
    }
}

void Q7()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int len = sizeof(arr) / sizeof(arr[0]), EvenAdd = 0;
    for (int i = 0; i < len; i++)
        if (arr[i] % 2 == 0) // 判断j是否为偶数
            EvenAdd += arr[i];
    printf("\n %d", EvenAdd);
}