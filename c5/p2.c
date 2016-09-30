#include <stdio.h>

int GCD(int a,int b)
{
	int c = a%b;
	if(c==0)
	{
		return b;
	}
	else
	{
		return GCD(b,c);	
	}
}
int main(void)
{
	printf("%d,GCD\n",GCD(20,2));
	return 0;
}
