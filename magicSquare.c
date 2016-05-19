
#include <stdio.h>
#include <stdlib.h>
#include <malloc/malloc.h>
//in Xcode, you should #include <malloc/malloc.h>
//big number may sometimes lead to errors(>10)
int main()
{
    int n;
    void array(int n);
    printf("Set n, please:\n");
    scanf("%d", &n);
    array(n);
    printf("\n");
    return 0;
}

void array(int n){
    int i, j, no, num, max;
    int *mtrx;
    
    if(n % 2 == 0){
        n++;
    }
    max = n * n;
    
    mtrx = malloc(max + max);
    mtrx[n/2] = 1;
    i = 0;
    j = n/2;
    for(num = 2; num <= max; num++){
        i = i - 1;
        j = j + 1;
        if ((num-1) % n == 0){
            i = i + 2;
            j = j - 1;
        }
        if(i < 0){
            i = n - 1;
        }
        if(j > n - 1){
            j = 0;
        }
        no = i * n + j;
        
        mtrx[no] = num;
    }
    
    printf("The magic square is: ");
    no = 0;
    for(i = 0; i < n; i++){
        printf("\n");
        for(j = 0; j < n; j++){
            printf("%6d", mtrx[no]);
            no++;
        }
    }
    free(mtrx);
}
