#include <stdio.h>

int most_frequent_product(int arr[], int n) {
    int un[100];
    int freq[100];
    int c = 0; 


    for (int i = 0; i < n; i++) {
        int found = -1;

        for (int j = 0; j < c; j++) {
            if (un[j] == arr[i]) {
                found = j;
                break;
            }
        }

        if (found != -1) {
            freq[found]++;
        } else {
            un[c] = arr[i];
            freq[c] = 1;
            c++;
        }
    }

    int best_id = un[0];
    int max_freq = freq[0];

    for (int i = 1; i < c; i++) {
        if (freq[i] > max_freq) {
            max_freq = freq[i];
            best_id = un[i];
        } else if (freq[i] == max_freq) {
            if (un[i] < best_id) {
                best_id = un[i];
            }
        }
    }

    return best_id;
}

int main() {
    // Case 1
    int arr1[] = {101, 103, 101, 102, 103, 105, 101, 103};
    printf("Result 1: %d\n", most_frequent_product(arr1, sizeof(arr1)/sizeof(arr1[0])));

    // Case 2
    int arr2[] = {-2, -2, 3, 3, 0};
    printf("Result 2: %d\n", most_frequent_product(arr2, sizeof(arr2)/sizeof(arr2[0])));

    // Case 3
    int arr3[] = {5, 5, 5, 2, 2, 2, 2};
    printf("Result 3: %d\n", most_frequent_product(arr3, sizeof(arr3)/sizeof(arr3[0])));

    // Case 4
    int arr4[] = {99};
    printf("Result 4: %d\n", most_frequent_product(arr4, sizeof(arr4)/sizeof(arr4[0])));
    
    // Case 5
    int arr5[] = {4,1,4,1,7};
    printf("Result 5: %d\n", most_frequent_product(arr5, sizeof(arr5)/sizeof(arr5[0])));

    return 0;
}
