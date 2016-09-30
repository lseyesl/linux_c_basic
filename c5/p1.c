#include <stdio.h>
int is_leap_year(int year)
{
	return (year%4==0 && year%100 !=0)||year%400==0;	
}

int main(void)
{
	int year = 2000;
	if(is_leap_year(year))
	{
		printf("%d is leap year \n",year);	
	}
	else
	{
		printf("%d is'nt leap year\n",year);	
	}
}

