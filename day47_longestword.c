#include <stdio.h>

// Q94: Find the longest word in a sentence

int main() {
    char str[200], longest[200];
    int i = 0, j = 0, maxLen = 0, currLen = 0, start = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n') {
            currLen++;
        } else {
            if (currLen > maxLen) {
                maxLen = currLen;
                for (j = 0; j < currLen; j++) {
                    longest[j] = str[start + j];
                }
                longest[currLen] = '\0';
            }
            currLen = 0;
            start = i + 1;
        }
        i++;
    }

    if (currLen > maxLen) {
        maxLen = currLen;
        for (j = 0; j < currLen; j++) {
            longest[j] = str[start + j];
        }
        longest[currLen] = '\0';
    }

    printf("%s\n", longest);
    return 0;
}
