// Q41: Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include <math.h>
int main() {
    int num, first, last, digits, swapped;
    printf("Enter a number: ");
    scanf("%d", &num);
    last = num % 10;
    digits = (int)log10(num);
    first = num / (int)pow(10, digits);
    swapped = last * (int)pow(10, digits) + (num % (int)pow(10, digits));
    swapped = swapped - last + first;
    printf("%d\n", swapped);
    return 0;
}
