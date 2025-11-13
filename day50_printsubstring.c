#include <stdio.h>

// Q100: Print all sub-strings of a string (without using other libraries)

int main() {
    char str[100];
    int len = 0, i, j, k;

    printf("Enter a string: ");
    scanf("%s", str);

    // manually calculate length
    while (str[len] != '\0') {
        len++;
    }

    // generate substrings
    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            if (!(i == len - 1 && j == len - 1)) {
                printf(",");
            }
        }
    }

    printf("\n");
    return 0;
}
