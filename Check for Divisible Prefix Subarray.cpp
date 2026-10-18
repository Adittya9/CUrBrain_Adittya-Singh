#include<stdio.h>
#include<stdbool.h>
long long mod(long long v){
	if(v<0)
		v=-v;
	return v; 
}

long long zeromoudlo(long long arr[],int n,int k){
	if(n==0)
		return false;
	k=mod(k);
	long long sum=0;
	for(int i=0;i<n;i++){
		sum+=arr[i];
		if(sum%k==0)
			return true;
	}
	return false;
}

int main(){
	long long tc1[] = {4, 2, 9};
    int n1 = sizeof(tc1) / sizeof(tc1[0]);
    printf("Test 1: %s\n", zeromoudlo(tc1, n1, 3) ? "True" : "False");

    long long tc2[] = {1, 2, 4};
    int n2 = sizeof(tc2) / sizeof(tc2[0]);
    printf("Test 2: %s\n", zeromoudlo(tc2, n2, 5) ? "True" : "False");

    long long tc3[] = {5};
    int n3=sizeof(tc3)/sizeof(tc3[0]);
    printf("Test 3: %s\n", zeromoudlo(tc3, n3, 5) ? "True" : "False");
    
    long long tc4[] = {0,1};
    int n4 = sizeof(tc4) / sizeof(tc4[0]);
    printf("Test 3: %s\n", zeromoudlo(tc4, n4, 7) ? "True" : "False");
    
    long long tc5[] = {-2,2,1};
    int n5 = sizeof(tc5) / sizeof(tc5[0]);
    printf("Test 3: %s\n", zeromoudlo(tc5, n5, 3) ? "True" : "False");

    return 0;
}
