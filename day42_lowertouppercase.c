#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a lowercase string: ");
    scanf("%[^\n]", str);

    while(str[i] != '\0') {
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;  // convert to uppercase
        }
        i++;
    }

    printf("Uppercase string: %s\n", str);

    return 0;
}

/* Program to convert a lowercase string to uppercase without using built-in functions */
