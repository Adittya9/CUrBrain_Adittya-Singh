#include <stdio.h>
#include <stdlib.h>

int k;
int *arr1;

void rr(int arr[], int len) {

    arr1 = (int *)malloc(len * sizeof(int));
    if (arr1 == NULL) 
		return;

    k = k % len;

    for (int i = 0; i < len; i++) {
        arr1[(i + k) % len] = arr[i];
    }

    for (int i = 0; i < len; i++) {
        arr[i] = arr1[i];
    }

}

void printArray(int arr[], int len) {
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int nums1[] = {1, 2, 3, 4, 5, 6, 7};
    int len1 = sizeof(nums1) / sizeof(nums1[0]);
    k = 3;
    rr(nums1, len1);
    printArray(nums1, len1);

    int nums2[] = {1, 2};
    int len2 = sizeof(nums2) / sizeof(nums2[0]);
    k = 5;
    rr(nums2, len2);
    printArray(nums2, len2); 

    return 0;
}
