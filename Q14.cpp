#include<stdio.h>
#include<stdlib.h>
int *item;
int thr;
int len;
int c;
void check(int arr[]){
	item = (int *)malloc(len*sizeof(int));
	
	for(int i=0;i<len;i++){
		if(arr[i] >= thr){
			*(item+c) = arr[i];
			c++;
		}
	}
}

void display(){
	for(int i=0;i<c;i++)
		printf("%d ",*(item+i));
	c=0;
}

int main(){
	//case1
	int sales1[] = {150,80,200,90,300};
	thr=100;
	len = sizeof(sales1)/sizeof(sales1[0]);
	check(sales1);
	display();
	printf("\n");
	//case2
	int sales2[] = {100,150,100};
	thr=100;
	len = sizeof(sales2)/sizeof(sales2[0]);
	check(sales2);
	display();
	printf("\n");
	//case3
	int sales3[] = {};
	thr=50;
	len = sizeof(sales3)/sizeof(sales3[0]);
	check(sales3);
	display();
	printf("\n");
	//case4
	int sales4[] = {10,20,30};
	thr=40;
	len = sizeof(sales4)/sizeof(sales4[0]);
	check(sales4);
	display();
	printf("\n");
	//case5
	int sales5[] = {75,75,75};
	thr=75;
	len = sizeof(sales5)/sizeof(sales5[0]);
	check(sales5);
	display();
	printf("\n");
}
