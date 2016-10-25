#include <stdio.h>

int main(void)
{
	
	int a[5],b[5]={1,2,3,4,5};
	for(int i =0;i<5;i++)
	{
		a[i]=b[i];	
		printf("a[%d]=%d,b[%d]=%d\n",i,a[i],i,b[i]);
	}
	return 0;
}
