//calculate perfect numbers between 1 to 10000
#include <stdio.h>

int main(){
    int perfect(int n);
    int i, j, n;
    
    printf("Perfect numbers between 1 and 1000:\n");
    j = 0;
    for(i = 2; i < 10000; i++){
        if((n = perfect(i)) >0){
            printf("\n%5d = ",i);
            
            //calculate all divisor and display them
            
            for(j = 1; j < i; j++){
                if(i % j == 0){
                    if(j > 1){
                        printf(" +");
                    }
                    printf("%5d", j);
                }
            }
        }
    }
    printf("\n");
    return 0;
}

int perfect(int n){
    int i, sum;
    
    sum = 0;
    //calculate all divisors of sum and add
    for(i = 1; i < n; i++){
        if(n % i == 0){
            sum += i;
        }
    }
    
    if(sum == n){
        return sum;
    }
    else{
        return 0;
    }

}
