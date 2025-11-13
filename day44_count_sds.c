#include <stdio.h>

// Q87: Count spaces, digits, and special characters in a string

int main() {
    char str[200];
    int spaces = 0, digits = 0, special = 0, i = 0;

    printf("Enter a string: ");
    // read full line including spaces
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] == ' ') {
            spaces++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        } else if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            // letters, do nothing
        } else if (str[i] != '\n') {
            special++;
        }
        i++;
    }

    printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);
    return 0;
}
