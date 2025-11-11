#include <stdio.h>

int main() {
    long long num;
    printf("Enter an integer number: ");
    scanf("%lld", &num);

    int freq[10] = {0}; // frequency array for digits 0-9

    // Count frequency of each digit
    while(num > 0) {
        int digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    int maxDigit = 0;
    int maxCount = freq[0];

    // Find digit with maximum frequency
    for(int i = 1; i < 10; i++) {
        if(freq[i] > maxCount) {
            maxCount = freq[i];
            maxDigit = i;
        }
    }

    printf("%d\n", maxDigit);

    return 0;
}
