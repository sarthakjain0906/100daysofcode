#include <stdio.h>

int main() {
    int n, key;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n+1]; // +1 to accommodate the new element
    printf("Enter %d sorted elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &key);

    int i;
    // Find position to insert
    for(i = n - 1; (i >= 0 && arr[i] > key); i--) {
        arr[i + 1] = arr[i]; // shift elements to the right
    }
    arr[i + 1] = key; // insert element

    printf("Array after insertion: ");
    for(int j = 0; j <= n; j++) {
        printf("%d ", arr[j]);
    }
    printf("\n");

    return 0;
}

