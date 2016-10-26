#include <stdio.h>

#define LEN 8

int a[LEN] ={2,4,5,8,3,1,9,7};

int partition(int start,int end)
{
	int mid = start;
	int i;
	int _mid = a[mid];
	for(i=start;i<end;i++){
		if(_mid>a[i]){
			int temp = a[i];
			int j;
			for(j=i;j>mid;j--){
				a[j]=a[j-1];
			}
			a[mid] = temp;
			mid++;
		}	
	}
	printf("sort:%d,%d,%d,%d,%d,%d,%d,%d\n",a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7]);

	return mid;
	
}

void quicksort(int start,int end)
{
	int mid;
	if(end>start){
		mid = partition(start,end);
		quicksort(start,mid-1);
		quicksort(mid+1,end);
		printf("start->%d,end->%d,mid->%d\n",start,end,mid);
	}


}

int main(void)
{
	quicksort(0,8);
	printf("end---%d,%d,%d,%d,%d,%d,%d,%d\n",a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7]);
	return 0;
}
