#include <stdio.h>
#include <stdlib.h>
void cube(int n);

int main(){
    int n;
    printf("Set n, please:\n");
    scanf("%d", &n);
    cube(n);
    printf("\n");
    return 0;
}

void cube(int n){
    int i, j, no, num, max;
    int *mtrx;
    
    if(n%2==0){
        n++;
    }
    max = n*n;
    
    mtrx = malloc(max + max);
    mtrx[n/2] = 1;
    i = 0;
    j = n/2;
    for(num = 2; num <= max; num++){
        i--;
        j++;
        if((num-1)%n == 0){
            i = i + 2;
            j = j - 1;
        }
        if(i < 0){
            i = n - 1;
        }
        if(j > n-1){
            j = 0;
        }
        no = i * n +j;
        
        mtrx[no] = num;
    }
    
    //显示魔方阵的元素
    printf("The charming matrix is:");
    no = 0;
    for(i=0; i<n; i++){
        printf("\n");
        for(j=0; j<n;j++){
            printf("%5d", mtrx[no]);
            no++;
        }
    }
    
    free(mtrx);
}
