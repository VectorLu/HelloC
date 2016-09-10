//binary/octal/decimal/hexadecimal system transform
#include <stdio.h>
#include <math.h>

float decimal(char *sBoh, int radix);
void boh(float dec, int radix, char *sBoh);


int main() 
{
    float fDec;
    char sBoh[41];
    
    printf("\nEnter a value to convert: ");
    scanf("%f", &fDec);
    
    boh(fDec, 2, sBoh);
    printf(" From Decimal to Binary: %s\n", sBoh);
    
    boh(fDec, 8, sBoh);
    printf(" From Decimal to Octal: %s\n", sBoh);
    
    boh(fDec, 16, sBoh);
    printf(" From Decimal to Hexadecimal: %s\n", sBoh);
    
    printf("\n\nEnter a binary string:");
    scanf("%s", sBoh);
    fDec = decimal(sBoh, 2);
    printf(" From Binary to Decimal: %f", fDec);
    
    printf("\n\nEnter a octal string: ");
    scanf("%s", sBoh);
    fDec = decimal(sBoh, 8);
    printf(" Fron Octal to Decimal: %f", fDec);
    
    printf("\n\nEnter a hexadecimal string:");
    scanf("%s", sBoh);
    fDec = decimal(sBoh, 16);
    printf(" From Hexadecimal to Decimal: %f", fDec);
    
    return 0;
}

float decimal(char *sBoh, int radix)
{
    int i, iLen,iDec, digit;
    char c, ch;
    int fInt;
    float fDec;
    
    //get the length of the string
    i = 0;
    iDec = -1;
    while(sBoh[i] != '\0')
    {
        //get the index of dot
        if(sBoh[i] == '.')
        {
            iDec = i;
        }
        i++;
    }
    iLen = i;

    if(iDec == -1)
    {
        iDec = iLen - 1;
    }

    //convert the string to the decimal in accordance with radix

    //Extract digits
    fInt = 0;
    fDec = 0;
    for(i = 0; i <iLen; i++)
    {
        //get integer elements sequentially
        //get decimal components inversely
        if(i > iDec)
        {
            ch = sBoh[iDec + iLen - i];
        }
        else
        {
            
        }
    }

}










