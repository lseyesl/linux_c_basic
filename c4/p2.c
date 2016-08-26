#include <stdio.h>
#include <math.h>

void pr(int x,int y)
{
	int m=x,n;
	for(int i =0;i<y;i++)
	{
		n = m%10;
		m = (int)(m/10);
	}
	printf("weishu is %d\n",n);
}
int main(void)
{
	pr(55,1);
	pr(55,2);
}
