/*use Chinese Remainder Theorem to solve numbers from 1~99*/
#include <stdio.h>
void remainder(int n);
int main()
{
	int i;
	for(i = 1; i < 100; i++)
	{
		if((i-1)%2 == 0)
		{
			printf("\n");
		}
		remainder(i);
	}

	return 0;
}

void remainder(int n)
{
	int r3, r5, r7, mul, sub, divisor;

	r3 = n%3;
	r5 = n%5;
	r7 = n%7;

	mul = r3*70 + r5*21 + r7*15;
	divisor = mul/105;
	sub = mul - divisor*105;

	printf("%d : %d*70 + %d*21 + %d*15 - %d*105 = %d  ", n, r3, 
		r5, r7, divisor, sub);

}