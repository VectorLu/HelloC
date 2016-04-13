//将输入的整数逆序输出
//
#include <stdio.h>

int main(){
	int num;
	int ret;
	int digit;
	//如果在VS里运行，scanf要换为scanf_s
	scanf("%d", &num);
	while(num > 0){
		digit = num%10;
		ret = ret*10 + digit;
		num /=10;
	}
	printf("%d", ret);
	return 0;
}	
