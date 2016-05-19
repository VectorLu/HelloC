//use brute_force method to get right_angled triangle
#include <stdio.h>

int main(){
    long int a, b, c;
    long int n = 0L;
    long int aa, bb, cc;
    
    printf("Right-angled triangle:\n");
    for(a = 1L; a <= 500L; a++){
        for(b = 1L; b <= a; b++){
            for(c = 1L; c<=b; c++){
                //Pythagoras' theorem
                aa = a*a;
                bb = b*b;
                cc = c*c;
                if(aa == bb +cc){
                   
                    printf(" a = %3ld, b = %3ld, c = %3ld \n", a, b, c);
                    n++;
                }
            }
        }
    }
    printf("\n");
    printf("There are totally %ld right-angled triangled triangles.", n);
    printf("\n");
    return 0;
}
