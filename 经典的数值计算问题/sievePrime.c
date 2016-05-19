//calculate the primes between 1 to 1000
#include <stdio.h>

int main(){
    int i, j, divisor, nums[1000], max;
    
    for(i = 0; i < 1000; i++){
        nums[i] = i + 1;
    }
    
    //remove 1
    nums[0] = -1;
    
    //remove the num that can be divided by 2/3/
    max = nums[999];
    for(divisor = 2; divisor < max; divisor++){
        for(i = 0; i < 1000; i++){
            //get numbers left
            if(nums[i] > divisor){
                if(nums[i] % divisor == 0){
                    nums[i] = -1;
                }
            }
        }
    }
    
    //display all primes
    j = 0;
    printf("Prime numbers between 1 and 1000:\n");
    for(i = 0; i < 1000; i++){
        if(nums[i] > 0){
            if(j % 10 == 0){
                printf("\n");
            }
            printf("%4d", nums[i]);
            j++;
        }
    }
    printf("\n");
    
    return 0;
}