#include <stdio.h>

// Q89: Count frequency of a given character in a string

int main() {
    char str[200], ch;
    int i = 0, count = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter a character to find frequency: ");
    scanf(" %c", &ch);   // space before %c to skip newline

    while (str[i] != '\0') {
        if (str[i] == ch) {
            count++;
        }
        i++;
    }

    printf("%d\n", count);
    return 0;
}
