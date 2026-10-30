#include<stdio.h>
#include<stdlib.h>
int *darr;
void operation(int arr[], int s, int e, int len){
	darr = (int *)malloc(len*sizeof(int));
	for(int i=0;i<len;i++){
		if(i==s){
			for(int j=e;j>=s;j--){
				*(darr+i) = arr[j];
				i++;
			}
		}
		*(darr+i) = arr[i];
	}
}

void display(int len){
	for(int i=0;i<len;i++){
		printf("%d ",*(darr+i));
	}
	printf("\n");
}

int main(){
	//case1
	int arr1[] = {10,20,30,40,50,60};
	operation(arr1,1,4,sizeof(arr1)/sizeof(arr1[0]));
	display(sizeof(arr1)/sizeof(arr1[0]));
	
	//case2
	int arr2[] = {1,2,3,4};
	operation(arr2,0,3,sizeof(arr2)/sizeof(arr2[0]));
	display(sizeof(arr2)/sizeof(arr2[0]));
	
	//case3
	int arr3[] = {7};
	operation(arr3,0,0,sizeof(arr3)/sizeof(arr3[0]));
	display(sizeof(arr3)/sizeof(arr3[0]));
	
	//case4
	int arr4[] = {1,2,3,4,5};
	operation(arr4,2,4,sizeof(arr4)/sizeof(arr4[0]));
	display(sizeof(arr4)/sizeof(arr4[0]));
	
	//case5
	int arr5[] = {1,2,3,4,5};
	operation(arr5,0,2,sizeof(arr5)/sizeof(arr5[0]));
	display(sizeof(arr5)/sizeof(arr5[0]));
	
	return 0;
}
