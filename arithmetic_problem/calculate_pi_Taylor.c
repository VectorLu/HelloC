//利用Taylor展开求pi
#include <stdio.h>
#include <math.h>
int main()
{
    //tmp = pi/4
    double pi = 0.0;
    double tmp = 1.0;
    double delta = 1.0;
    double deltaAbsolute = 1.0;
    double n = 1;
    double minus = -1;
    while(fabs(pi-3.141592)>0.000001){
        n += 2;
        deltaAbsolute = 1/n;
        delta = minus*deltaAbsolute;
        minus *= (-1);
        tmp += delta;
        pi = tmp * 4;

    }
    printf("pi is %lf\n", pi);
    printf("pi/4 is %lf\n", tmp);
    
    return 0;
}
