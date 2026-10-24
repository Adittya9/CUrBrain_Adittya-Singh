#include<stdio.h>

int len;

void check(int arr[]){
	int max = -1;
	int smax = -1;	
	if(len<2)
		printf("%d\n",smax);
	else{
		for(int i=0;i<len;i++){
			if(arr[i] > max){
				smax = max;
				max = arr[i];
			}
			else if(arr[i] < max && arr[i] > smax)
				smax = arr[i];
		
		}
		printf("%d\n",smax);
	}
}

int main(){
	//case1
	int scores1[] = {50,40,50,30};
	len = sizeof(scores1)/sizeof(scores1[0]);
	check(scores1);
	//case2
	int scores2[] = {100,100,100};
	len = sizeof(scores2)/sizeof(scores2[0]);
	check(scores2);
	//case3
	int scores3[] = {};
	len = sizeof(scores3)/sizeof(scores3[0]);
	check(scores3);
	//case4
	int scores4[] = {10,20,30,40};
	len = sizeof(scores4)/sizeof(scores4[0]);
	check(scores4);
	//case5
	int scores5[] = {5,5,4,4,3};
	len = sizeof(scores5)/sizeof(scores5[0]);
	check(scores5);
	
}
