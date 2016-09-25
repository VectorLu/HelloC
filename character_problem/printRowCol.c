#include <stdio.h>

void display(char ch, int line, int width);
int main()
{
    char ch;
    int rows, columns;

    while((ch = getchar()) != '\n')
    {
        scanf("%d %d", &rows, &columns);

        /* consume the \n from scanf*/
        getchar();
        
        display(ch, rows, columns);
        printf("Enter the char, number of rows and columns:");
        printf("\nEnter a new line to quit.\n");
    }
    return 0;
}

void display(char ch, int line, int width)
{
    int i, j;
    for (i = 0; i < line; i++)
    {
        printf("\n");
        for (j = 0; j < width; j++)
        {
            putchar(ch);
        }
    }
    printf("\n");
}
