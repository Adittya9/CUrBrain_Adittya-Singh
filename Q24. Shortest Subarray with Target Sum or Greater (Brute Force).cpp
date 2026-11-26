#include <stdio.h>

int shortest_subarray_length(const int arr[], int n, int target) {
    int min_len = n + 1;

    for (int i = 0; i < n; i++) {
        int current_sum = 0;
        for (int j = i; j < n; j++) {
            current_sum += arr[j];
            if (current_sum >= target) {
                int len = j - i + 1;
                if (len < min_len) {
                    min_len = len;
                }
                break;
            }
        }
    }

    return (min_len > n) ? 0 : min_len;
}

int main(void) {
    int arr1[] = {2, 3, 1, 2, 4, 3};
    int arr2[] = {1, 1, 1};
    int arr3[] = {5};
    int arr4[] = {1, 2, 3, 4, 5};
    int arr5[] = {};

    printf("%d\n", shortest_subarray_length(arr1, 6, 7));
    printf("%d\n", shortest_subarray_length(arr2, 3, 10));
    printf("%d\n", shortest_subarray_length(arr3, 1, 5));
    printf("%d\n", shortest_subarray_length(arr4, 5, 11));
    printf("%d\n", shortest_subarray_length(arr5, 0, 3));

    return 0;
}
