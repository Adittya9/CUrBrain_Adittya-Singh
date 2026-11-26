#include <stdio.h>

int smallest_subarray_sum(const int arr[], int n) {
    int min_sum = arr[0];

    for (int i = 0; i < n; i++) {
        int current_sum = 0;
        for (int j = i; j < n; j++) {
            current_sum += arr[j];
            if (current_sum < min_sum) {
                min_sum = current_sum;
            }
        }
    }

    return min_sum;
}

int main(void) {
    int arr1[] = {3, -4, 2, -3, 5};
    int arr2[] = {1, 2, 3};
    int arr3[] = {-1, -2, -3};
    int arr4[] = {5};
    int arr5[] = {4, -1, -2, 1, -5, 3};

    printf("%d\n", smallest_subarray_sum(arr1, 5));
    printf("%d\n", smallest_subarray_sum(arr2, 3));
    printf("%d\n", smallest_subarray_sum(arr3, 3));
    printf("%d\n", smallest_subarray_sum(arr4, 1));
    printf("%d\n", smallest_subarray_sum(arr5, 6));

    return 0;
}
