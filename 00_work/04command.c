#include <stdio.h>
#include <string.h>
void main()
{
    int i = 0;
    int j = 0;
    int other = 0;  // 其它个数
    int ZIMU = 0;   // 大写字母个数
    int zimu = 0;   // 小字母个数
    int number = 0; // 数字个数
    int space = 0;  // 空格个数
    int c = 0;      // 用来存取getchar取出来单个字母
    char arr[3][80] = {" ABCDEFGHIJKLMNOPQRSTUVWXYZ1234abcdefghijklmnopqrstuvwxyz1234 .,.,. .,.,", "ABCDEFGHIJKLMNOPQRSTUVWXYZ1234abcdefghijklmnopqrstuvwxyz1234 .,.,. .,.,", "ABCDEFGHIJKLMNOPQRSTUVWXYZ1234abcdefghijklmnopqrstuvwxyz1234 .,.,. .,.,"};
    for (i = 0; i < 3; i++)
    {
        j = 0;
        while (arr[i][j] != '\0')
        {
            if (arr[i][j] == ' ')
            {
                space++;
            }
            else if (arr[i][j] >= '0' && arr[i][j] <= '9')
            {
                number++;
            }
            else if (arr[i][j] >= 'a' && arr[i][j] <= 'z')
            {
                zimu++;
            }
            else if (arr[i][j] >= 'A' && arr[i][j] <= 'Z')
            {
                ZIMU++;
            }
            else
            {
                other++;
            }
            j++;
        }
    }
    printf("大写字母个数 %d \n", ZIMU);
    printf("小写字母个数 %d \n", zimu);
    printf("数字个数 %d \n", number);
    printf("空格个数 %d \n", space);
    printf("其它个数 %d \n", other);
}