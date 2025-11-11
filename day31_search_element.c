#include <stdio.h>

int main() {
    int n, key;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    int index = -1; // default if not found
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            index = i; // store index if found
            break;     // exit loop once found
        }
    }

    if(index != -1) {
        printf("Found at index %d\n", index);
    } else {
        printf("-1\n");
    }

    return 0;
}
