#include <stdio.h>

int GCD(int a,int b)
{
	int c;
	while(a%b!=0){
		c = a%b;
		a = b;
		b = c;
	}
	return b;
}
int main(void)
{
	int a = 20,b = 3;
	printf("%d is gcd\n",GCD(a,b));
	return 0;
}
