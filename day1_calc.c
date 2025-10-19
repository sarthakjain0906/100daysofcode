#include <stdio.h>

int main() {
    int a, b, sum, diff, product, quotient;
	printf("enter two number");
    scanf("%d %d", &a, &b);

    sum = a + b;
    diff = a - b;
    product = a * b;
    quotient = a / b;

    printf("Sum=%d\n Diff=%d\n Product=%d\n Quotient=%d\n", sum, diff, product, quotient);
    return 0;
}
