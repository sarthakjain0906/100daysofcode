#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    printf("Characters of the string on new lines:\n");
    while(str[i] != '\0') {
        printf("%c\n", str[i]);
        i++;
    }

    return 0;
}

/* Program to print each character of a string on a new line */
