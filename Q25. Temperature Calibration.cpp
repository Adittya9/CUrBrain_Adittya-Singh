#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int first;
    int second;
} Pair;

Pair closest_temperature_pair(const int temps[], int n, int target) {
    int left = 0;
    int right = n - 1;
    Pair best = {temps[left], temps[right]};
    int min_diff = abs((temps[left] + temps[right]) - target);

    while (left < right) {
        int sum = temps[left] + temps[right];
        int diff = abs(sum - target);

        if (diff < min_diff) {
            min_diff = diff;
            best.first = temps[left];
            best.second = temps[right];
        }

        if (sum < target) {
            left++;
        } else if (sum > target) {
            right--;
        } else {
            break;
        }
    }

    return best;
}

int main(void) {
    int temps1[] = {10, 22, 28, 29, 30, 40};
    int temps2[] = {1, 3, 5, 9};
    int temps3[] = {1, 2};
    int temps4[] = {-4, -1, 2, 6};
    int temps5[] = {10, 20, 30};

    Pair res1 = closest_temperature_pair(temps1, 6, 54);
    Pair res2 = closest_temperature_pair(temps2, 4, 8);
    Pair res3 = closest_temperature_pair(temps3, 2, 100);
    Pair res4 = closest_temperature_pair(temps4, 4, 3);
    Pair res5 = closest_temperature_pair(temps5, 3, 5);

    printf("(%d, %d)\n", res1.first, res1.second);
    printf("(%d, %d)\n", res2.first, res2.second);
    printf("(%d, %d)\n", res3.first, res3.second);
    printf("(%d, %d)\n", res4.first, res4.second);
    printf("(%d, %d)\n", res5.first, res5.second);

    return 0;
}
