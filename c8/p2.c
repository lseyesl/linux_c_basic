#include <stdio.h>
#include <stdlib.h>

#define N 20

int a[N];

void rand_num(int upp_num)
{
	for(int i=0;i<N;i++)
		a[i]=random()%upp_num;
}

int main(void)
{
	rand_num(10);
	int num[10] ={};
	int i;
	for(i=0;i<N;i++)
	{
		int val = a[i];
		num[val] = ++num[val];
		printf("%d",a[i]);
	}
	printf("\n");

	printf("0\t1\t2\t3\t4\t5\t6\t7\t8\t9\n");
	for(i=0;i<10;i++)
	{
		int j =0;
		for(j=0;j<10;j++)
		{
			if(num[j]<=i)
			{
				printf(" \t");	
			}
			else
			{
				printf("*\t");	
			}
		}
		printf("\n");
	}
	return 0;
}

