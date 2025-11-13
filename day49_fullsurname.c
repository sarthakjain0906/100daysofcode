#include <stdio.h>

// Q98: Print initials of a name with the surname displayed in full

int main() {
    char str[200];
    int i = 0, lastSpace = -1;

    printf("Enter a name: ");
    fgets(str, sizeof(str), stdin);

    if (str[0] != ' ' && str[0] != '\n') {
        printf("%c.", str[0]);
    }

    while (str[i] != '\0') {
        if (str[i] == ' ') {
            lastSpace = i;
            if (str[i+1] != ' ' && str[i+1] != '\n' && str[i+1] != '\0') {
                // print initial only if not the last word
                if (str[i+1] != '\0') {
                    printf("%c.", str[i+1]);
                }
            }
        }
        i++;
    }

    if (lastSpace != -1) {
        printf(" ");
        for (i = lastSpace + 1; str[i] != '\0' && str[i] != '\n'; i++) {
            printf("%c", str[i]);
        }
    }

    printf("\n");
    return 0;
}
