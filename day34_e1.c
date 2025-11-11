#include <stdio.h>

int main() {
    int n, pos, key;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n+1]; // +1 to accommodate the new element
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position and element to insert: ");
    scanf("%d %d", &pos, &key);

    // Shift elements to the right from the given position
    for(int i = n; i > pos; i--) {
        arr[i] = arr[i-1];
    }
    arr[pos] = key; // insert element at position

    printf("Array after insertion: ");
    for(int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
