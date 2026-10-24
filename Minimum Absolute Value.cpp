#include<stdio.h>

int len;
int st;
int min;
int abs(int v){
	if(v<0)
		return -v;
	return v;
}

void check(int arr[]){
	min = abs(arr[0]);
	st = arr[0];
	for(int i=1;i<len;i++){
		if(abs(arr[i]) < min){
			st = arr[i];
			min = abs(st);
		}
	}
	printf("Output is %d\n",st);
}
int main(){
	//case1
	int arr1[] = {10,-5,-2,4,2};
	len = sizeof(arr1)/sizeof(arr1[0]);
	check(arr1);
	//case2
	int arr2[] = {-3,3};
	len = sizeof(arr2)/sizeof(arr2[0]);
	check(arr2);
	//case3
	int arr3[] = {0,-1,1};
	len = sizeof(arr3)/sizeof(arr3[0]);
	check(arr3);
	//case4
	int arr4[] = {7,-7,4};
	len = sizeof(arr4)/sizeof(arr4[0]);
	check(arr4);
	//case5
	int arr5[] = {5,-2,2,-1};
	len = sizeof(arr5)/sizeof(arr5[0]);
	check(arr5);
	return 0;
}
