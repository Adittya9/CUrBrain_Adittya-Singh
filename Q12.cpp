#include<stdio.h>

long long pow(int b,int p){
	long long res=1;
	for(int i=0;i<p;i++){
		res=res*b;
	}
	return res;
}

long long modmul(int b, int p, int mod){
	long long res;
	long long v1=pow(b,p);
	res=v1%mod;
	return res;
}

int main(){
	printf("Test 1 Result: %lld\n", modmul(2, 10, 1000));
	
    printf("Test 2 Result: %lld\n", modmul(7, 0, 13));

    printf("Test 3 Result: %lld\n", modmul(9, 1, 7));
    
    printf("Test 4 Result: %lld\n", modmul(3, 4, 1));
    
    printf("Test 5 Result: %lld\n", modmul(0, 5, 11));

    return 0;
}
