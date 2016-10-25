#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	char gesture[3][10] = {"scissor","stone","cloth"};
	int man,computer,result,ret;

	srand(time(NULL));
	while(1){
		computer = rand()%3;
		printf("\n input your gesture (0-scissor 1-stone 2-cloth):\n");
		ret = scanf("%d",&man);
		if(ret != 1 || man < 0|| man>2)
		{
			printf("invalid input!");
			continue;
		}

		printf("your gesture:%s\t computer's gesture:%s\n",gesture[man],gesture[computer]);

		result = (man - computer +4)%3-1;
		if(result >0)
			printf("you win\n");
		else if(result ==0)
			printf("draw!\n");
		else
			printf("you lose!\n");
	}
	return 0;
}
