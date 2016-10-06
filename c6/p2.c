#include <stdio.h>

int len1_9(int num)
{
	if(num % 10 ==9)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int len2_9(int num)
{
	if((num/10)%10==9)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int all9()
{

	int start =1,
	    stop = 100,
	    step =1,
	    num = 0;
	while(start<=stop)
	{
		if(start<10)
		{
			if(len1_9(start))
			{
				num++;	
			}
		}
		else
		{
			int n = start%100;
			if(len2_9(start))
			{
				num++;
			}
			if(len1_9(n))
			{
				num++;
			}
		}
		start++;
	}
	return num;
}

int main(void)
{
	printf("%d is over",all9());
}
