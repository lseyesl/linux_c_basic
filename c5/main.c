#include <stdio.h>
#include <math.h>
void print_logarithm(double x)
{
	if(x<= 0.0){
		printf("positive numbers only,please\n");
		return ;
	}
	printf("the log of x is %f",log(x));
}

int main()
{
	print_logarithm(0.1);
	return 0;
}
