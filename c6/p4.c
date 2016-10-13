#include <stdio.h>
int diamond(int num,char s)
{
	if(num%2 ==0)
	{
		printf("error num");	
	}
	int len = (num/2)+1;

	int i =0,j=0;
	for(i =0;i<num;i++)
	{
		for(j=0;j<num;j++)
		{
			int l = 0;
			if(len<(i+1))
			{
				l =2*(2*len-i-1)-1;	
			}
			else
			{
				l = 2*(i+1)-1;	
			}
			int idx = (num - l)/2;
			int lidx = num -idx;
			if(j>=idx&&j<lidx)
			{
				printf("%c",s);	
			}
			else
			{
				printf("_");	
			}			

		}
		printf("\n");
	}
	return 0;
}

int main(void)
{
	diamond(3,'*');
	diamond(5,'+');
	return 0;
}
