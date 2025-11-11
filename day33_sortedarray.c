#include <stdio.h>

int main() {
    int n, key;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d sorted elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    int low = 0, high = n - 1, mid;
    int index = -1; // default if not found

    while(low <= high) {
        mid = (low + high) / 2;

        if(arr[mid] == key) {
            index = mid;
            break;
        } else if(arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if(index != -1) {
        printf("Found at index %d\n", index);
    } else {
        printf("-1\n");
    }

    return 0;
}
