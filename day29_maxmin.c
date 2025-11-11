#include <stdio.h>

void findMinMax(int arr[], int n) {
    if (n <= 0) {
        return;
    }

    int max_val = arr[0];
    int min_val = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
        if (arr[i] < min_val) {
            min_val = arr[i];
        }
    }

    printf("Max=%d, Min=%d\n", max_val, min_val);
}

int main() {
    int n;
    
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }

    int arr[n]; 

    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            return 0;
        }
    }

    findMinMax(arr, n);

    return 0;
}
