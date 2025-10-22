// Q43: Write a program to check if a number is a strong number.
#include <stdio.h>
int factorial(int n) {
    int fact = 1;
    for (int i = 2; i <= n; i++)
        fact *= i;
    return fact;
}
int main() {
    int num, temp, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }
    if (sum == num)
        printf("Strong number\n");
    else
        printf("Not strong number\n");
    return 0;
}

