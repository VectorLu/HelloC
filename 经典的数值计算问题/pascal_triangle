
#include <stdio.h>
#include <stdlib.h>
#include <malloc/malloc.h>
//in Xcode, you should #include <malloc/malloc.h>
int main(){
    void pascal_triangle(int n);
    int n;
    printf("Input n, please:\n");
    scanf("%d", &n);
    pascal_triangle(n);
    
    return 0;
}

void pascal_triangle(int n){
    int i, j, index = 0, num, max;
    int *mtrx;
    
    max = n*n;
    mtrx = malloc(max+max);
    for(i = 0; i < n; i++){
        for(j = 0; j <= i; j++){
            if(i < 1){
                mtrx[0] = 1;
            }
            else{
                index = i*n + j;
                if(j==0 || j==i){
                    num = 1;
                }
                else{
                    num = mtrx[index - n] + mtrx[index - n -1];
                }
                mtrx[index] = num;
            }
        }
    }
    //display Pascal's Triangle
    printf("The Pascal's Triangle is:\n");
    for(i = 0; i < n; i++){
        printf("\n");
        index = i*n;
        for(j = 0; j <= i; j++){
            printf("%5d",mtrx[index]);
            index++;
        }
    }
    free(mtrx);
}
