//将输入的整数逆序输出
//test git
//如果在VS里运行，scanf要换为scanf_s
#include <stdio.h>
int main()
{
    int digit = 0;
    int remainder = 0;
    int back = 0;
    scanf("%d",&digit);

    while(digit > 0)
    {
        remainder = digit % 10;
        back = 10*back + remainder;
        digit /= 10;
    }
    printf("%d\n", back);
    return 0;
}
