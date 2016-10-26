#include <stdio.h>

#define LEN 8

int a[LEN] ={2,4,5,8,3,1,9,7};

int partition(int start,int end)
{
	int _mid = start;

	int i,j,
	len = end -start,
	mid = start;
	temp=a[_mid];
	for(i=start;i<len;i++){
		if(temp>a[i]){
			int _tep = a[j];
			for(j=end;j<end-i;j--){
				a[j] = a[j-1];
			}		
		}	
	}

	return mid
	
}
