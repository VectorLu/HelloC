//Taylor 展开求e
#include <stdio.h>

int main(){
	int n = 1;
	double delta, x, e;
	e = 1.0;
	x = 1.0;
	delta = 1.0;
	while(delta > 0.000001){
		delta = delta*x/n;
		e += delta;
		n++;
	}
	printf("Euler number is %lf.\n", e);
	return 0;
}
