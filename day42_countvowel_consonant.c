#include <stdio.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0, i = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    while(str[i] != '\0') {
        char ch = str[i];
        if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            char lower = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;
            if(lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
        i++;
    }

    printf("Vowels=%d, Consonants=%d\n", vowels, consonants);

    return 0;
}

/* Program to count vowels and consonants in a string */
