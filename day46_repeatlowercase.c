#include <stdio.h>

// Q92: Find the first repeating lowercase alphabet in a string

int main() {
    char str[200];
    int i, j, found = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            for (j = i + 1; str[j] != '\0'; j++) {
                if (str[i] == str[j]) {
                    printf("%c\n", str[i]);
                    found = 1;
                    break;
                }
            }
        }
        if (found) break;
    }

    if (!found) {
        printf("No repeating lowercase alphabet found\n");
    }

    return 0;
}
