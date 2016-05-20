//use chord to calcute the solutions of equations
#include <stdio.h>
#include <math.h>
float function(float x);
float xc(float x1, float x2);
float root(float x1, float x2, float epsilon);



int main() {
    float x1, x2, fx1, fx2, x, epsilon;
    do {
        printf("Please input x1, x2, epsilon:\n");
        scanf("%f, %f, %f", &x1, &x2, &epsilon);
        fx1 = function(x1);
        fx2 = function(x2);
    } while (fx1*fx2 > 0);
    
    x = root(x1, x2, epsilon);
    printf("A root is %f.", x);
    return 0;
}

float function(float x) {
    float z;
    
    z = ((x - 5.0)*x + 16.0)*x - 80.0;
    return z;
}

float xc(float x1, float x2) {
    float  z;
    
    z = (x1*function(x2) - x2*function(x1)) / (function(x2) - function(x1));
    return z;
}

float root(float x1, float x2, float epsilon) {
    float x, fx1, fx2, fx;
    
    fx1 = function(x1);
    do {
        
        x = xc(x1, x2);
        fx = function(x);
        
        if (fx*fx1 > 0) {
            fx1 = fx;
            x1 = x;
        }
        else {
            fx2 = fx;
            x2 = x;
        }
    }
    while (fabs(fx) >= epsilon);
    
    return x;
    
}
