#include <stdio.h>

int main(void)
{
	int i;
	char str[6] = "hello";
	char reverse_str[6] = "";

	printf("%s\n",str);
	for(i=0;i<=4;i++)
		reverse_str[4-i] = str[i];
	reverse_str[5] = str[5];

	printf("%s\n",reverse_str);
	return 0;
}
