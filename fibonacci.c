#include <stdio.h>
//rabits_month
int main(){
	int fn1, fn2, fn3;
	int i = 3;
	int month = 1;
	//fib(41)>sizeof(long)
	printf("Please input the month(1<= month <=40:\n");
	scanf("%d", &month);
	fn1 = fn2 = 1;
	if(1 == month){
		printf("Month_ 1: %10ld ", fn1);
	}else{
		printf("Month_ 1: %10ld ", fn1);
		printf("Month_ 2: %10ld ", fn2);
		for(; i <= month; i++){
			fn3 = fn1 + fn2;
			//printf(),%的个数要与后面提供的变量个数相同
			//%啊，变量一多不要就忘记了前面看似不重要的变量
			//一点小错误，犯了两次，以后在printf()中打%号的时候
			//一边打一边数，在给出后面的变量的时候也数，就知道是否对应了
			printf("Month_%2d: %10ld ", i, fn3);
			if (i%4==0){
				printf("\n");
			}  
			fn1 = fn2;
			fn2 = fn3;
		}
	}
	return 0;
}
