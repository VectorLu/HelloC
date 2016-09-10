#include <stdio.h>
int palindrome(char *string);

int main()
{
    char *str1 = "Dot saw I was Tod.";
    //Dot把我看成是Tod了。
    char *str2 = "Niagara O roar again!";
    //尼亚加拉河，哦，又在怒吼！
    printf("\n Palindromes:\n");
    if(palindrome(str1) > 0)
    {
        printf("\n%s",str1);
    }
    if(palindrome(str2))
    {
        printf("\n%s",str2);
    }
    printf("\n");
    return 0;
}

int palindrome(char *string)
{
    int i, j, iLen, bL, bR, isPalindrome;
    char cL, cR;
    
    iLen = 0;
    for(i = 0; string[i] != '\0'; i++)
    {
        iLen++;
    }
    
    isPalindrome = 1;
    i = 0;
    j = iLen - 1;
    while(i < iLen)
    {
        //字母大小写转换
        cL = string[i];
        cR = string[j];
        if(cL >= 97 && cL <= 122)
        {
            cL -= 32;
        }
        if(cR >= 97 && cR <= 122)
        {
            cR -= 32;
        }
        
        //比较和移动下标
        bL = (cL>=48&&cL<=55)||(cL>=65&&cL<=90);
        bR = (cR>=48&&cL<=55)||(cR>=65&&cL<=90);
        
        if(bL&&bR)
        {
            if(cL != cR)
            {
                isPalindrome = -1;
                break;
            }
        }
        
        if(bL == bR)
        {
            i++;
            j--;
        }
        
        //这里主要是考虑到空格可以忽略
        //但是会让一些非法字符钻空子，所以这个解法还很不完善
        if(bL && !bR)
        {
            j--;
        }
        
        if(!bL && bR)
        {
            i++;
        }
    }
    return isPalindrome;
}
