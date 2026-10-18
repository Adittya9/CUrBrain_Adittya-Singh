#include<stdio.h>
#define MOD 1000000007

long long sum(long long arr[], int n){
	long long tsum=0;
	for(int i=0;i<n;i++){
		tsum = (tsum+(arr[i]%MOD))%MOD;
	}
	return tsum;
}

int main(){
	long long tc1[] = {1000000000, 1000000000, 1000000000};
	int n1=sizeof(tc1)/sizeof(tc1[0]);
	printf("Test 1 Result: %lld\n", sum(tc1, n1));
	
	long long tc2[] = {1, 2, 3, 4};
    int n2 = sizeof(tc2) / sizeof(tc2[0]);
    printf("Test 2 Result: %lld\n", sum(tc2, n2)); 

    long long tc3[] = {};
    int n3 = 0;
    printf("Test 3 Result: %lld\n", sum(tc3, n3)); 

	long long tc4[] = {1000000007};
    int n4 = 1;
    printf("Test 4 Result: %lld\n", sum(tc4, n4)); 
    
    long long tc5[] = {0, 0, 0};
    int n5 = sizeof(tc5)/sizeof(tc5[0]);
    printf("Test 5 Result: %lld\n", sum(tc5, n5)); 
    return 0;
    
    
}
