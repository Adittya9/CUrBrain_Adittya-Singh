#include <stdio.h>

int rightSum, temp;

void replaceWithRightSum(int arr[], int len) {
    rightSum = 0;

    for (int i = len - 1; i >= 0; i--) {
        temp = arr[i];       
        arr[i] = rightSum;   
        rightSum += temp;    
    }
}

void printArray(int arr[], int len) {
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr1[] = {10, 4, 8, 3};
    int len1 = sizeof(arr1) / sizeof(arr1[0]);
    replaceWithRightSum(arr1, len1);
    printArray(arr1, len1); 
    int arr2[] = {5};
    int len2 = sizeof(arr2) / sizeof(arr2[0]);
    replaceWithRightSum(arr2, len2);
    printArray(arr2, len2); 

    return 0;
}
