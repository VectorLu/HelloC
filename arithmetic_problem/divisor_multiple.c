// use Euclidean algorithm to calculate
//greatest common divisor and largest common multiple
#include <stdio.h>

int main(){
    int m,n;
    int temp_m, temp_n;
    int remainder = 0;
    int greatest_common_divisor = 1;
    int largest_commo_multiple = 1;
    
    scanf("%d%d", &m, &n);
    temp_m = m;
    temp_n = n;
    //calculate greatest common divisor
    while((remainder = temp_m % temp_n) != 0){
        temp_m = temp_n;
        temp_n = remainder;
    }
    greatest_common_divisor = temp_n;
    printf("The greatest common divisor of %5d and %5d"
            " is %5d.\n", m, n, greatest_common_divisor);
    
    largest_commo_multiple = m * n /greatest_common_divisor;
    printf("The largest common multiple of %5d and %5d"
           " is %5d.\n", m, n, largest_commo_multiple);
    
    return 0;
}
