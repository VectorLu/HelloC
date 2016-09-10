#include <stdio.h>
int main(){
	int i, n, r,soc;

	printf(" Daffodil number:\n");

	for(i = 100; i <= 999; i++){
		int sum = 0;
		n = i;
		while(n > 0){
			r = n % 10;
			sum = sum + r*r*r;
			n /= 10;
		}

		if(sum == i){
			printf("%5d\n",i);
		}
	}
	printf("\n");

	return 0;
}
