#include <stdio.h>

// Q90: Toggle case of each character in a string

int main() {
    char str[200];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;   // convert uppercase to lowercase
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;   // convert lowercase to uppercase
        }
        i++;
    }

    printf("%s\n", str);
    return 0;
}
