// Q50: Write a program to print the following pattern:
// *****
//  ****
//   ***
//    **
//     *
#include <stdio.h>
int main() {
    int i, j, space, star;
    for (i = 0; i < 5; i++) {
        for (space = 0; space < i; space++) {
            printf(" ");
        }
        for (star = 0; star < 5 - i; star++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
