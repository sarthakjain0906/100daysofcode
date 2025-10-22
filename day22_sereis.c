// Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>
int main() {
    int n, i;
    float sum = 0.0;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        int num = 2 * i + 1;
        int den = num + 1;
        sum += (float)num / den;
    }
    printf("Approximate sum: %f\n", sum);
    return 0;
}
